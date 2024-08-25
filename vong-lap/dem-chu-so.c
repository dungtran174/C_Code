#include <stdio.h>

int main() {
    long long n; scanf("%lld", &n);
    int cnt = 0;
    while(n) {
        cnt++;
        n /= 10;
    }
    printf("%d", cnt);
}