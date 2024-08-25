#include <stdio.h>

long long f[100];

void fibo()
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 92; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    fibo();
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        int ok = 0;
        for (int i = 0; i <= 92; i++)
        {
            if (n == f[i])
            {
                ok = 1;
            }
        }
        if (ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
}