#include <stdio.h>
#include <math.h>
int so_nguyen_to(long long n) {
    if(n < 2) {
        return 0;
    }
    for(long long i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long a, b; scanf("%lld %lld", &a, &b);
        if(a > b) {
            long long tmp = a;
            a = b;
            b = tmp;
        }
        int count = 0;
        for(long long i = a; i <= sqrt(b); i++) {
            if(so_nguyen_to(i) == 1) {
                count++;
            }
        }
        printf("%d\n", count);
    }
}