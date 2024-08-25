#include <stdio.h>
#define ll long long

ll fi[100];
void fibonacci(int n, ll fi[]) {
    fi[0] = 0;
    fi[1] = 1;
    for(int i = 2; i < n; i++) {
        fi[i] = fi[i - 1] + fi[i - 2];
    }
}

int main() {
    int n; 
    scanf("%d", &n);
    fibonacci(100, fi);
    ll a[n][n];
    int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
    int i = 0;
    while (i < n * n) {
        for (int j = c1; j <= c2; j++) a[h1][j] = fi[i++];
        for (int j = h1 + 1; j <= h2; j++) a[j][c2] = fi[i++];
        for (int j = c2 - 1; j >= c1; j--) a[h2][j] = fi[i++];
        for (int j = h2 - 1; j > h1; j--) a[j][c1] = fi[i++];
        c1++; c2--; h1++; h2--;
    }
    // In ma trận
    for (int k = 0; k < n; k++) {
        for (int j = 0; j < n; j++) {
            printf("%lld ", a[k][j]);
        }
        printf("\n");
    }
}