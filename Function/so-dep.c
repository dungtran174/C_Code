#include <stdio.h>
#include <math.h>

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int f2 = 0, f1 = 1, f;
    while(f2 + f1 <= n) {
        f = f2 + f1;
        f2 = f1;
        f1 = f;
        if(f == n) return 1;
    }
    return 0;
}

int prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if(fibo(sum)) return 1;
    return 0;
}

int main() {
    int a, b, count = 0;
    scanf("%d%d", &a, &b);
    if(a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for(int i = a; i <= b; i++) {
        if(prime(i) && sumOfDigits(i)) {
            printf("%d ", i);
        }
    }
}