#include <stdio.h>

int soKhongGiam2(long long n) {
    int lastDigit = n % 10;
    while(n) {
        if(n % 10 > lastDigit) {
            return 0;
        }
        lastDigit = n % 10;
        n /= 10;
    }
    return 1;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long n; scanf("%lld", &n);
        long long a = 1;
        for(int i = 0; i < n; i++) {
            a *= 10;            
        }
        for(long long i = a / 10; i < a; i++) {
            if(soKhongGiam2(i)) {
                printf("%lld ", i);
            }
        }
        printf("\n");
    }
} 