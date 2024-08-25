#include <stdio.h>

long long lat(long long n)
{
    long long tmp = n;
    long long sum = 0;
    while (n)
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    return sum == tmp;
}

long long tcs(long long n) {
    long long sum = 0;
    while (n)
    {
        sum += n%10;
        n/=10;
    }
    if(sum % 10 == 0) return 1;
    return 0;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        long long a = 1, cnt = 0;
        for(int i = 0; i < n; i++) {
            a*=10;
        }
        for(long long i = a/10; i < a; i++) {
            if(tcs(i) && lat(i)) cnt++;
        }
        printf("%lld\n", cnt);
    }
}