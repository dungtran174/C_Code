#include <stdio.h>
#include <math.h>
#define ll long long
int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        ll fac = 1;
        for(int  i = 2; i <= sqrt(n); i++) {
            if(n % i == 0) {
                fac = 1ll * fac * i;
                while(n % i == 0) {
                    n /= i;
                }
            }
        }
        if(n > 1) fac *= n;
        printf("%lld\n", fac);
    }
}