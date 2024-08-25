#include <stdio.h>

int main() {
    int u0, d, n;
    scanf("%d %d %d", &u0, &d, &n);
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += u0 + i * d;
    }
    printf("%lld", sum);
}