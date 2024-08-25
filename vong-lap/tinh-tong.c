#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    long long sum = 0;
    if(a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    printf("%lld", sum);
}