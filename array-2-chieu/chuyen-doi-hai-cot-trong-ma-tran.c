#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }
    int x, y;
    scanf("%d%d", &x, &y);
    --x; --y;
    for(int i = 0; i < n; i++) {
        int tmp = a[i][x];
        a[i][x] = a[i][y];
        a[i][y] = tmp;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}