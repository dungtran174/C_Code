#include <stdio.h>
#include <math.h>

int so_nguyen_to(int n) {
    if(n < 2) {
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        for(int i = 2; i <= n/2; i++) {
            if(so_nguyen_to(i) && so_nguyen_to(n - i)) {
                printf("%d %d ", i, n - i);
            }
        }
        printf("\n");
    }
}