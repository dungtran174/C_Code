#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char s[101] = {};
    gets(s);
    int n = 0;
    int res[101][101] = {};
    char *token = strtok(s, " ");
    while(token != NULL) {
        int ok = 0;
        for(int i = 0; i < n; i++) {
            if(strcmp(token, res[i]) == 0) {
                ok = 1;
                break;
            }
        }
        if(!ok) {
            strcpy(res[n], token);
            n++;
        }
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < n; i++) {
        printf("%s ", res[i]);
    }
} 