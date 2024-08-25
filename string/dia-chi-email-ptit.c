#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void lower(char c[]) {
    for(int i = 0; i < strlen(c); i++) {
        c[i] = tolower(c[i]);
    }
}

int main() {
    char c[51], a[100][100];
    gets(c);
    lower(c);
    int n = 0;
    char *token = strtok(c, " ");
    while(token != NULL) {
        strcpy(a[n], token);
        n++;
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < n - 1; i++) {
        printf("%c", a[i][0]);
    }
    printf("%s", a[n-1]);
    printf("@ptit.edu.vn");
}