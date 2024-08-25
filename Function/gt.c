#include <stdio.h>

int gt(int n) {
    int res = 1;
    for(int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", gt(n));
}