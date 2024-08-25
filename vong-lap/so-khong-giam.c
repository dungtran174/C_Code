#include <stdio.h>
#include <math.h>

long long soKhongGiam(long long n) {
    int last = n % 10;
    n /= 10;
    while(n) {
        if(n % 10 > last) return 0;
        last = n % 10;
        n /= 10;
    }
    return 1;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long n; scanf("%lld", &n);
        if(soKhongGiam(n)) printf("YES\n");
        else printf("NO\n");
    }
}