#include <stdio.h>
#include <string.h>

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        char str[20];
        sprintf(str, "%lld", n);
        if(str[0] == str[strlen(str) - 1]) printf("YES\n");
        else printf("NO\n");
    }
}