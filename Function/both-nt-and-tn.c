#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int tn(int n) {
    int sum = 0;
    int tmp = n;
    while(tmp) {
        sum = sum * 10 + tmp % 10;
        tmp /= 10;
    }
    return sum == n;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int a, b; scanf("%d%d", &a, &b);
        if(a > b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        int cnt = 0;
        for(int i = a; i <= b; i++) {
            if(isPrime(i) && tn(i)) {
                printf("%d ", i);
                cnt++;
            }
            if(cnt == 10) {
                printf("\n");
                cnt = 0;
            }
        }
        printf("\n");
    }
}