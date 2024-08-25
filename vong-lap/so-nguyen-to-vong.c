#include <stdio.h>
#include <math.h>

int prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int reverse(int n) {
    int tmp = n;
    int rev = 0;
    while (tmp > 0) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }
    return tmp = rev;
}

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);
        if (prime(n) && prime(reverse(n))) {
            printf("1 ");
        }
        else {
            printf("0 ");
        }
    }
}