#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        char c[50];
        scanf("%s", c);
        int cnt = 0;
        int n = strlen(c);
        int l = 0, r = n - 1, ok = 0;
        while(l < r) {
            if(c[l] != c[r]) {
                cnt++;
            }
            ++l; --r;
        }
        if(cnt == 1 && n % 2 == 0) printf("YES\n");
        else if (cnt <= 1 && n % 2 == 1) printf("YES\n");
        else printf("NO\n");
    }
}