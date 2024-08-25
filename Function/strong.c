#include <stdio.h>=

int strong(int n) {
    int sum = 0;
    int tmp = n;
    while(tmp) {
        int t = tmp % 10;
        int f = 1;
        for(int i = 1; i <= t; i++) {
            f *= i;
        }
        sum += f;
        tmp /= 10;
    }
    return sum == n;
}

int main() {
    int a, b; scanf("%d%d", &a, &b);
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i = a; i <= b; i++) {
        if(strong(i)) {
            printf("%d ", i);
        }
    }
}