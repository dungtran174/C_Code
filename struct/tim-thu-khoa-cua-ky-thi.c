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
int main()
{
    int n;
    scanf("%d", &n);
    double max = 0;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        a[i].id = i + 1;
        gets(a[i].name);
        gets(a[i].date);
        scanf("%lf%lf%lf", &a[i].mark1, &a[i].mark2, &a[i].mark3);
        a[i].marksum = a[i].mark1 + a[i].mark2 + a[i].mark3;
        if (max < a[i].marksum)
            max = a[i].marksum;
    }
    for (int i = 0; i < n; i++)
        if (a[i].marksum == max)
            printf("%d %s %s %.1lf\n", a[i].id, a[i].name, a[i].date, a[i].marksum);
}