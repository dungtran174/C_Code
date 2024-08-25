#include <stdio.h>

long long tohop2(int n, int k) {\
    k = k > n - k ? n - k : k;
    long long res = 1;
    for(int i = 1; i <= k; i++) {
        res = res * (n - i + 1);
        res /= i;
    }
    return res;
}

int main() {
    int n; 
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%lld ", tohop2(i, j));
        }
        printf("\n");
    }
} 
