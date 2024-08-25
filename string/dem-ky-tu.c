#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);
    int letters = 0, digits = 0, others = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (isalpha(s[i])) {
            letters++;
        } else if (isdigit(s[i])) {
            digits++;
        } else if (s[i] != '\n') { 
            others++;
        }
    }
    printf("%d %d %d\n", letters, digits, others);
}