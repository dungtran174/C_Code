#include <stdio.h>

int main() {
    int t; 
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n][m], b[m][n];
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                scanf("%d", &a[j][k]);
            }
        }
        for(int j = 0; j < m; j++) {
            for(int k = 0; k < n; k++) {
                b[j][k] = a[k][j];
            }
        }
        printf("Test %d:\n", i);
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                long long sum = 0;
                for(int l = 0; l < m; l++) {
                    sum += 1ll * a[j][l] * b[l][k];
                }
                printf("%lld ", sum);
            }
            printf("\n");
        }
    }
}
