#include <stdio.h>
#include <math.h>

long long thuan_nghich(long long n) {
    long long tmp = n; 
    long long m = 0;
    while (tmp > 0) {
        m = m * 10 + tmp % 10;
        tmp /= 10;
    }
    return m == n;
}

long long chuso_le(long long n) {
    while (n > 0) {
        if (n % 2 == 0) return 0;
        n /= 10;
    }
    return 1;
}

long long tong_chu_so(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if(sum % 2 == 0) return 0;
    return 1;
}
int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long n; scanf("%lld", &n);
        if(thuan_nghich(n) && chuso_le(n) && tong_chu_so(n)) printf("YES\n");
        else printf("NO\n");
    } 
}
