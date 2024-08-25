#include <stdio.h>

int main()
{
    int m, n, p, q;
    scanf("%d%d%d%d", &m, &n, &p, &q);

    int a[m][n], b[n][p], c[p][q];

    // Đọc ma trận A
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Đọc ma trận B
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &b[i][j]);

    // Đọc ma trận C
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &c[i][j]);

    // Tính ma trận trung gian AB = A x B
    int ab[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            ab[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                ab[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Tính ma trận kết quả D = AB x C
    int d[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            d[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                d[i][j] += ab[i][k] * c[k][j];
            }
        }
    }

    // In ma trận kết quả D
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    return 0;
}