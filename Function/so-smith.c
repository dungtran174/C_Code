#include <stdio.h>
#include <math.h>

int tongChuSo(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve(int n) {
    int sum = 0;
    int temp = n;
    for(int i = 2; i <= sqrt(n); i++) {
        while(n % i == 0) {
            sum += tongChuSo(i);
            n /= i;
        }
    }
    if(n > 1) {
        sum += tongChuSo(n);
    }
    if(sum == tongChuSo(temp)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    solve(n);
}