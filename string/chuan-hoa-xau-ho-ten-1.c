#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void chuanHoa(char s[]) {
    for(int i = 0; i < strlen(s); i++) {
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
}

int main() {
    int t; scanf("%d", &t);
    getchar();
    while(t--) {
        char s[81];
        char a[20][50], n = 0;
        gets(s);
        char *token = strtok(s, " ");
        while(token != NULL) {
            strcpy(a[n], token);
            n++;
            token = strtok(NULL, " ");
        }
        for(int i = 0; i < n; i++) {
            chuanHoa(a[i]);
            printf("%s", a[i]);
            if(i != n - 1) printf(" ");
        }
        printf("\n");
    }
}