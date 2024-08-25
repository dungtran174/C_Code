#include <stdio.h>

long long subarraySum(int a[], int n) {
    long long max = -1e18, sumCurrent = 0;
    for (int i = 0; i < n; i++) {
        sumCurrent += a[i];
        if (sumCurrent > max) max = sumCurrent;
        if (sumCurrent < 0) sumCurrent = 0;
    }
    return max;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("%lld\n", subarraySum(a, n));
    }
    return 0;
}