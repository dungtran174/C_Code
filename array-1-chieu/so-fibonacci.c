#include <stdio.h>

long long f[100];

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        f[1] = 1;
        f[2] = 1;
        for(int i = 3; i <= 92; i++) {
            f[i] = f[i-1] + f[i-2];
        }
        printf("%lld\n", f[n]);
    }
}