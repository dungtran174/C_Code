#include <stdio.h>

int prime[1000000];
int dem[1000000];
void sieve(int n, int prime[])
{
    for (int i = 0; i <= n; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = 0;
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    sieve(1000000, prime);
    for (int y = 0; y < t; y++)
    {
        int k = 1;
        for (int i = 2; i < 1000000; i++)
        {
            if (prime[i] == 1)
            {
                dem[k++] = i;
            }
        }
        int n;
        scanf("%d", &n);
        int a[n][n];
        int c1 = 0, c2 = n - 1, h1 = 0, h2 = n - 1;
        int i = 1;
        while (i <= n * n)
        {
            for (int j = c1; j <= c2; j++)
                a[h1][j] = dem[i++];
            for (int j = h1 + 1; j <= h2; j++)
                a[j][c2] = dem[i++];
            for (int j = c2 - 1; j >= c1; j--)
                a[h2][j] = dem[i++];
            for (int j = h2 - 1; j > h1; j--)
                a[j][c1] = dem[i++];
            h1++;
            c2--;
            h2--;
            c1++;
        }
        printf("Test %d:\n", y + 1);
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                printf("%d ", a[j][k]);
            }
            printf("\n");
        }
        memset(dem, 0, sizeof(dem));
    }
}