#include <stdio.h>

int main() {
    long long n; scanf("%lld", &n);
    for(int i = 1; i <= 10; i++) {
        printf("%lld ", n * i);
    }
}