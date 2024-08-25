#include <stdio.h>
#include <math.h>

int prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n; scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if (prime(a[i])) cnt++;
    }
    printf("%d ", cnt);
    for(int i = 0; i < n; i++) {
        if (prime(a[i])) printf("%d ", a[i]);
    }
}