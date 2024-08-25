#include <stdio.h>
#include <math.h>

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        long long t = sqrt(n);
        if(t * t == n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}