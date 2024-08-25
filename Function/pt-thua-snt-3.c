#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t; scanf("%d", &t);
    int test = 1;
    while (t--) {
        int n; scanf("%d", &n);
        printf("Test %d: ", test++);
        for (int i = 2; i <= n; i++) {
            if (isPrime(i) && n % i == 0) {
                int count = 0;
                while (n % i == 0) {
                    count++;
                    n /= i;
                }
                if (count) {
                    printf("%d(%d) ", i, count);
                }
            }
        }
        printf("\n");
    }
}
