#include <stdio.h>
#include <math.h>
// 1 2 4 5 10 20
// 1 2 4 8
int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long n; 
        scanf("%lld", &n);
        int cnt = 0;
        for(int i = 1; i <= sqrt(n); i++) {
            if(n % i == 0) {
                if(i % 2 == 0) cnt++;
                if(i != n / i && (n / i) % 2 == 0) cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}