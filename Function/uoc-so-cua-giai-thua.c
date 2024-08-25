#include <stdio.h>

int main() {
    int t, n, p, tmp, count, i;
    scanf("%d", &t);
    while(t--) {
        count = 0;
        scanf("%d%d", &n, &p);
        i = 1;
        while(p * i <= n) {
            tmp = p * i;
            while(tmp % p == 0) {
                tmp/=p;
                count++;
            }
            i++;
        }
        printf("%d\n", count);
    }
}