#include <stdio.h>

int soChanDacBiet(long long n) {
    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 != 0) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long n; scanf("%lld", &n);
        if(soChanDacBiet(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}