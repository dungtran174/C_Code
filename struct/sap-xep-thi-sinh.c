#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    char name[100];
    char date[100];
    double mark1;
    double mark2;
    double mark3;
    double marksum;
};
typedef struct Student Student;
int cmp(const void *a, const void *b)
{
    Student *x = (Student *)a;
    Student *y = (Student *)b;
    if (x->marksum > y->marksum)
        return -1;
    if (x->marksum < y->marksum)
        return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        a[i].id = i + 1;
        gets(a[i].name);
        gets(a[i].date);
        scanf("%lf%lf%lf", &a[i].mark1, &a[i].mark2, &a[i].mark3);
        a[i].marksum = a[i].mark1 + a[i].mark2 + a[i].mark3;
    }
    qsort(a, n, sizeof(Student), cmp);
    for (int i = 0; i < n; i++)
        printf("%d %s %s %.1lf\n", a[i].id, a[i].name, a[i].date, a[i].marksum);
}