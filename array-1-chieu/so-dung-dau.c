#include <stdio.h>

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        int a[n], b[n], s = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int maxRight = -1;
        for(int i = n-1; i >= 0; i--) {
            if(a[i] > maxRight) {
                maxRight = a[i];
                b[s++] = a[i];
            }
        }
        for(int i = s-1; i >= 0; i--) {
            printf("%d ", b[i]);
        }
        printf("\n");
    }
}