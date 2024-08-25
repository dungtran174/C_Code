#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct SV
{
    int id;
    char name[100];
    double a, b, c;
};

typedef struct SV SV;
SV s[1000], temp;
int cnt = 0;
void add()
{
    int n;
    scanf("%d\n", &n);
    printf("%d\n", n);
    while (n--)
    {
        s[cnt].id = cnt + 1;
        gets(s[cnt].name);
        scanf("%lf%lf%lf\n", &s[cnt].a, &s[cnt].b, &s[cnt].c);
        cnt++;
    }
}

void update()
{
    int n;
    scanf("%d\n", &n);
    printf("%d\n", n);
    gets(s[n - 1].name);
    scanf("%lf%lf%lf\n", &s[n - 1].a, &s[n - 1].b, &s[n - 1].c);
}

int cmp(const void *a, const void *b)
{
    SV *x = (SV *)a;
    SV *y = (SV *)b;
    double sum1 = x->a + x->b + x->c;
    double sum2 = y->a + y->b + y->c;
    if (sum1 < sum2)
        return -1;
    if (sum1 > sum2)
        return 1;
    return 0;
}

void display()
{
    // qsort(s, cnt, sizeof(SV), cmp);
    for (int i = 0; i < cnt; i++)
    {
        if (s[i].a < s[i].b && s[i].b < s[i].c)
        {
            printf("%d %s %.1lf %.1lf %.1lf\n", s[i].id, s[i].name, s[i].a, s[i].b, s[i].c);
        }
    }
}

int main()
{
    while (1)
    {
        char c;
        scanf("%c", &c);
        if (c == '1')
            add();
        if (c == '2')
            update();
        if (c == '3')
        {
            display();
            break;
        }
    }
}