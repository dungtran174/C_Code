#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int tongcs(char c[]) {
    int sum = 0;
    for(int i = 0; i < strlen(c); i++) {
        sum += c[i] - '0';
    }
    return sum % 10 == 0;
}
 
int check(char c[]) {
    int l = 0, r = strlen(c) - 1;
    if(c[0] != '8' || c[r] != '8') return 0;
    while(l <= r) {
        if(c[l] != c[r]) return 0;
        l++; r--;
    }
    if(!tongcs(c)) return 0;
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