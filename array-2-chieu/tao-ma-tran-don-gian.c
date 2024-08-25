#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j < i + 1) {
                printf("0 ");
            }
            else {
                printf("%d ", j - i);
            }
        }
        printf("\n");
    }
    return 0;
}