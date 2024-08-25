#include <stdio.h>

int main() {
    int t; scanf("%d", &t);
    for(int k = 0; k < t; k++) {
        int n; scanf("%d", &n);
        int a[n][n];
        int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
        int i = n * n;
        while (i >= 1) {
            for (int j = c1; j <= c2; j++) a[h1][j] = i--;
            for (int j = h1 + 1; j <= h2; j++) a[j][c2] = i--;
            for (int j = c2 - 1; j >= c1; j--) a[h2][j] = i--;
            for (int j = h2 - 1; j > h1; j--) a[j][c1] = i--;
            h1++; c2--; h2--; c1++;
        }
        printf("Test %d:\n", k + 1);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}