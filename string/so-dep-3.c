#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int check(char c[]) {
    int l = 0, r = strlen(c) - 1;
    while(l <= r) {
        if(c[l] != c[r]) return 0;
        l++; r--;
    }
    for(int i = 0; i < strlen(c); i++) {
        if(c[i] != '2' && c[i] != '3' && c[i] != '5' && c[i] != '7') 
            return 0;
    }
    return 1;
}

int main() {
    int t; scanf("%d", &t);
    getchar();
    while(t--) {
        char c[501];
        gets(c);
        if(check(c)) {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}