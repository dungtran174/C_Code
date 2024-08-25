#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    long long a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    long long min = 1e18, secondmin = 1e18;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            secondmin = min;
            min = a[i];
        } else if (a[i] < secondmin && a[i] != min) {
            secondmin = a[i];
        }
    }
    printf("%lld %lld", min, secondmin);
}