#include <stdio.h>

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int a, b, c, d; 
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if(c - a == d - b && c - a > 0 && d - b > 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}