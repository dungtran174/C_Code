#include <stdio.h>

int main() {
    int n, m, x;
    scanf("%d %d", &n, &m);
    int a[n + m], b[m];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    scanf("%d", &x);  
    for(int i = n - 1; i >= x; i--) {
        a[i + m] = a[i];
    }
    for(int i = 0; i < m; i++) {
        a[x + i] = b[i];
    }
    for(int i = 0; i < n + m; i++) {
        printf("%d ", a[i]);
    }
}   