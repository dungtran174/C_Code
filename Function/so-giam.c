#include <stdio.h>

int so_giam(int n) {
    int last = n % 10;
    n /= 10;
    while(n > 0) {
        if(n % 10 <= last) {
            return 0;
        }
        last = n % 10;
        n /= 10;
    }
    return 1;
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
            if(so_giam(i)) {
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
}