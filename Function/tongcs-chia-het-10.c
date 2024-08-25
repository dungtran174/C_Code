#include <stdio.h>

int tongcs(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        if(tongcs(n) % 10 == 0) printf("YES\n");
        else printf("NO\n");
    }
}