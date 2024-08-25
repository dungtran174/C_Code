#include <stdio.h>

int lat(int n)
{
    int tmp = n;
    int s = 0;
    while (n)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s == tmp;
}

int tcs(int n)
{
    int s = 0, ok = 0, lat;
    while (n)
    {
        lat = n%10;
        if (lat == 6)
        {
            ok = 1;
        }
        s += lat;
        n /= 10;
    }
    if (ok && (s % 10 == 8)) return 1;
    return 0;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (lat(i) && tcs(i))
            printf("%d ", i);
    }
}