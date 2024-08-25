#include <stdio.h>
#include <math.h>

int soHoanHao(int n) {
    if(n < 2) return 0;
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            sum += i;
            if(i != n / i) sum += n / i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    scanf("%d", &n);
    if(soHoanHao(n)) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}