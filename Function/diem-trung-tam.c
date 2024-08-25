#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int a[n+1]; 
    for(int i = 0; i <= n; i++) a[i] = 0;
    int b, c;
    for(int i = 0; i < n - 1; i++) {
        scanf("%d %d", &b, &c);
        if(b != c) {
            a[b]++;
            a[c]++;
        }
    }
    int found = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] == n-1) {
            printf("Yes");
            found = 1;
            break; 
        }
    }
    if (!found) {
        printf("No");
    }
}