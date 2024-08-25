#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void lower(char c[])
{
    for (int i = 0; i < strlen(c); i++)
    {
        c[i] = tolower(c[i]);
    }
}

int comp(const void *a, const void *b)
{
    char *x = (char*)a;
    char *y = (char*)b;
    return strcmp(x, y);
}

void tach(char a[][50], int *n, char c[])
{
    char *token = strtok(c, " ");
    while (token != NULL)
    {
        strcpy(a[*n], token); 
        (*n)++;
        token = strtok(NULL, " ");
    }
}

int main()
{
    char c1[101], c2[101], a[20][50], b[20][50];
    int n = 0, m = 0;
    gets(c1);
    gets(c2);
    lower(c1);
    lower(c2);
    tach(a, &n, c1);
    tach(b, &m, c2);
    qsort(a, n, sizeof(a[0]), comp);
    qsort(b, m, sizeof(b[0]), comp);
    for(int i = 0; i < n; i++) {
        while(strcmp(a[i], a[i+1]) == 0) {
            i++;
        }
        int ok = 1;
        for(int j = 0; j < m; j++) {
            if(strcmp(a[i], b[j]) == 0) {
                ok = 0;
                break;
            }
        }
        if(ok) printf("%s ", a[i]);
    }
}