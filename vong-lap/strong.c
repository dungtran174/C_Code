#include <stdio.h>

int fac(int n) {
    if(n == 0) return 1;
    return n * fac(n - 1);
}

int strong(int n) {
    int sum = 0;
    int m = n;
    while(m > 0) {
        sum += fac(m % 10);
        m /= 10;
    }
    return sum == n;
}
int main() {
    int n; 
    scanf("%d", &n);
    if(strong(n)) {
        printf("1");
    } else {
        printf("0");
    }
}