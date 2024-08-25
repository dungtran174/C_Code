#include <stdio.h>
#include <string.h>

int main() {
    int t; scanf("%d\n", &t);
    while (t--) {
        char s[1000]; gets(s);
        int count = 0;
        char *token = strtok(s, " ");
        while (token != NULL) {
            count++;
            token = strtok(NULL, " ");
        }
        printf("%d\n", count);
    }
}