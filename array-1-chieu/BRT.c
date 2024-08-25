#include <stdio.h>
// #include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), compare);
        int cnt = 0, min = 1e9 + 5;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] < min)
            {
                min = a[i] - a[i - 1];
                cnt = 1;
            }
            else if (a[i] - a[i - 1] == min)
            {
                cnt++;
            }
        }
        printf("%d %d\n", min, cnt);
    }
}