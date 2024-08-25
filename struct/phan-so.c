#include <stdio.h>

struct PhanSo
{
    int ts, ms;
};

typedef struct PhanSo PhanSo;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int main() {
    int t; scanf("%d", &t);
    for(int z = 1; z <= t; z++) {
        PhanSo a, b, c, d;
        scanf("%d%d%d%d", &a.ts, &a.ms, &b.ts, &b.ms);
        printf("Case #%d:\n", z);
        int x = gcd(a.ts, a.ms);
        a.ts /= x;
        a.ms /= x;
        x = gcd(b.ts, b.ms);
        b.ts /= x;
        b.ms /= x;
        int k = lcm(a.ms, b.ms);
        a.ts *= k/a.ms;
        b.ts *= k/b.ms;
        a.ms = b.ms = k;
        printf("%d/%d %d/%d\n", a.ts, a.ms, b.ts, b.ms);
        c.ts = a.ts +b.ts;
        c.ms = k;
        x = gcd(c.ts, c.ms);
        c.ts /= x;
        c.ms /= x;
        printf("%d/%d\n", c.ts, c.ms);
        c.ts = a.ts * b.ms;
        c.ms = a.ms * b.ts;
        x = gcd(c.ts, c.ms);
        c.ts /= x;
        c.ms /= x;
        printf("%d/%d\n", c.ts, c.ms);
    }
}