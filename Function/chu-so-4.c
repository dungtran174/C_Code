#include <stdio.h>

int thuanNghich(int n) {
    int m = n;
    int s = 0;
    while (n > 0) {
        if(n % 10 == 4) {
            return 0;
        }
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s == m;
}

int tongChuSo(int n) {
    int s = 0;
    while (n > 0) {
        if(n % 10 == 4) {
            return 0;
        }
        s += n % 10;
        n /= 10;
    }
    if(s % 10 != 0) {
        return 0;
    }
    return 1;
}

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);
        long long fac = 1;
        for(int i = 0; i < n; i++) {
            fac *= 10;
        }
        for(int i = fac / 10; i < fac; i++) {
            if(thuanNghich(i) && tongChuSo(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}

