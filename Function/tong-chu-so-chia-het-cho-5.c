#include <stdio.h>
#include <math.h>

int tcs(int n)
{
    int s = 0;
    while (n)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (snt(i) && (tcs(i) % 5 == 0))
        {
            cnt++;
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("%d", cnt);
}