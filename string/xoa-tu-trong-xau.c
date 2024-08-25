#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp1(char c[], char s[]) {
    int n1 = strlen(c);
    int n2 = strlen(s);
    if(n1 != n2) return 0;
    for(int i = 0; i < n1; i++) {
        if(tolower(c[i]) != tolower(s[i])) return 0;
    }
    return 1;
}
int main()
{
    int t; scanf("%d", &t);
    scanf("\n");
    for(int k = 0; k < t; k++) {
        char c1[201];
        char c2[21];
        gets(c1);
        scanf("%s", c2);
        getchar();
        printf("Test %d: ", k + 1);
        char *token = strtok(c1, " ");
        while (token != NULL)
        {
            if(cmp1(token, c2) == 0) {
                printf("%s ", token);
            }
            token = strtok(NULL, " ");
        }
         printf("\n");
    }
}