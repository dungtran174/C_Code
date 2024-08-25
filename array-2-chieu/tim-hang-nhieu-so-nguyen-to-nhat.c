#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    int max = -1, hang;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (isPrime(a[i][j]))
                count++;
        }
        if (count > max)
        {
            max = count;
            hang = i;
        }
    }
    printf("%d\n", hang + 1);
    for(int i = 0; i < n; i++)
    {
        if(isPrime(a[hang][i]))
            printf("%d ", a[hang][i]);
    }
}