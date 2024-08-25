#include <stdio.h>
#include <math.h>


long long find(long long n) {
    long long res;
    for(long long i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            res = i;
            while(n % i == 0) {
                n /= i;
            }
        }
    }
    if(n > 1) res = n;
    return res;
}

int main() {
    long long t; scanf("%lld", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", find(n));
    }
}