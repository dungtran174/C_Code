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
    for(int i = 0; i < m; i++) {
        int tmp = a[x][i];
        a[x][i] = a[y][i];
        a[y][i] = tmp;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}