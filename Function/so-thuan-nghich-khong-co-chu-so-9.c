#include <stdio.h>

int lat(int n) {
    int tmp = n;
    int s = 0, lat, ok = 0;
    while(n) {
        lat = n % 10;
        if(lat == 9) {
            ok = 1;
        }
        s = s*10 + lat;
        n/=10;
    } 
    if(ok) return 0;
    return s == tmp;
}

int main() {
    int n, cnt = 0; scanf("%d", &n);
    for(int i = 2; i < n; i++) {
        if(lat(i)) {
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n");
    printf("%d", cnt);
}