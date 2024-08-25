#include <stdio.h>
#include <math.h>
long long ucln(long long a, long long b)
{
    if (b == 0)
        return a;
    return ucln(b, a % b);
}

long long bcnn(long long a, long long b)
{
    return 1ll * a * b / ucln(a, b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        if(a > b) {
            long long temp = a;
            a = b;
            b = temp;
        }
        long long fac = a;
        for (long long i = a + 1; i <= b; i++)
        {
            fac = bcnn(fac, i);
        }
        printf("%lld\n", fac);
    }
}