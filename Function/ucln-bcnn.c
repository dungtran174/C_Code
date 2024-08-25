#include <stdio.h>
long long ucln(long long a, long long b) {
    if(b == 0) return a;
    return ucln(b, a%b);
}

long long bcnn(long long a, long long b) {
    return (long long)a*b/ucln(a,b);
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long a, b;
        scanf("%lld%lld", &a, &b);
        printf("%lld %lld", bcnn(a,b), ucln(a,b));
        printf("\n");
    }
}