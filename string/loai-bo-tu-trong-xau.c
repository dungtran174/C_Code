#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char s1[100], s2[100];
    gets(s1);
    scanf("%s", s2);
    int a[20][50], n = 0;
    char *token = strtok(s1, " ");
    while(token != NULL) {
        if(strcmp(token, s2) != 0) {
            strcpy(a[n++], token);
        }
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < n; i++) {
        printf("%s", a[i]);
        if(i != n - 1) {
            printf(" ");
        }
    }
}