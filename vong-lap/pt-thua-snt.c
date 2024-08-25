#include <stdio.h>
#include <math.h>

int is_prime(long long n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return n > 1;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long n; scanf("%lld", &n);
        for(int i = 2; i <= sqrt(n); i++) {
            while(n % i == 0) {
                if(is_prime(i)) {
                    printf("%d ", i);
                }
                n /= i;
            }
        }
        if(n > 1) {
            if(is_prime(n)) {
                printf("%lld", n);
            }
        }
        printf("\n");
    }
}