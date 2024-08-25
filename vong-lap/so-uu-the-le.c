#include <stdio.h>

int soUuTheLe(long long n) {
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
    return dem_le > dem_chan;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long n; scanf("%lld", &n);
        if(soUuTheLe(n) && n % 2 == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
} 