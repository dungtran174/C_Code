#include <stdio.h>
#include <math.h>
void sang(int n, int prime[]) {
    for(int i = 0; i <= n; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(prime[i] == 1) {
            for(int j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int chu_so(int n) {
    while(n) {
        if(n % 10 != 2 && n % 10 != 3 && n % 10 != 5 && n % 10 != 7) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n, m; scanf("%d %d", &n, &m);
        int prime[m + 1];
        sang(m, prime);
        int cnt = 0;
        for(int i = n; i <= m; i++) {
            if(prime[i] == 1 && chu_so(i) == 1) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}