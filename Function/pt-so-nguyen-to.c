#include <stdio.h>
#include <math.h>

void pt(long long n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n %  i == 0) {
            int mu = 0;
            while(n % i == 0) {
                mu++;
                n /= i;
            }
            printf("%d^%d", i, mu);
            if(n != 1) printf(" * ");
        }
    }
    if(n > 1) printf("%lld^1", n);
}

int main() {
    long long n;
    scanf("%lld", &n);
    pt(n);
    return 0;
}