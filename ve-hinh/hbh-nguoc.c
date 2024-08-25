#include  <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n-i; j++) {
            printf("~");
        }
        for(int i = 1; i <= m; i++) {
            printf("*");
        }
        printf("\n");
    }
}