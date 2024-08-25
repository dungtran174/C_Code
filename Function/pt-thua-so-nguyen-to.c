#include <stdio.h>
#include <math.h>

void solve(int n) {
    if(n < 2) return 0;
    printf("%d = ", n);
    for(int i = 2; i <= sqrt(n); i++) {
        int cnt = 0;
        if(n % i == 0) {
            while(n % i == 0) { 
                n /= i;
                cnt++;
            }
            printf("%d^%d", i, cnt);
            if(n != 1) printf(" * ");
        }
    }
    if(n > 1) printf("%d^1", n);
} 

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        solve(n);
        printf("\n");
    }
}