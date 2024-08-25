#include <stdio.h>

int soUuTheChan(long long n) {
    int dem_le = 0;
    int dem_chan = 0;
    while (n > 0) {
        int so = n % 10;
        if (so % 2 == 0) {
            dem_chan++;
        } else {
            dem_le++;
        }
        n /= 10;
    }
    return dem_chan > dem_le;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long n; scanf("%lld", &n);
        if(soUuTheChan(n) && n % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
} 