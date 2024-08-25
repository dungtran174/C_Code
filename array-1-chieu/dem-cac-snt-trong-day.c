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
    int t, k; scanf("%d", &t);
    for(int k = 1; k <= t; k++) {
        int n; scanf("%d", &n);
        int a[n], dem[100005] = {};
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("Test %d:\n", k);
        int max = -1;
        for(int i = 0; i < n; i++) {
            dem[a[i]]++;
            if (a[i] > max) max = a[i];
        }
        for (int i = 0; i <= max; i++) {
            if (prime(i) && dem[i] > 0) {
                printf("%d xuat hien %d lan\n", i, dem[i]);
                dem[i] = 0;
            }
        }
    }
}