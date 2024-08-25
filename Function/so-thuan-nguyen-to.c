#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
bool isPurePrime(int n) {
    int sum = 0;
    int digit;
    while (n > 0) {
        digit = n % 10;
        if (!isPrime(digit)) return false;
        sum += digit;
        n /= 10;
    }
    return isPrime(sum);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        int count = 0;
        for (int i = a; i <= b; i++) {
            if (isPrime(i) && isPurePrime(i)) {
                count++;
            }
        }
        printf("%d\n", count);
    }
}