#include <stdio.h>
#include <math.h>

int demchan(long long n) {
    int count = 0;
    while(n > 0) {
        if(n % 2 == 0) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int demle(long long n) {
    int count = 0;
    while(n > 0) {
        if(n % 2 != 0) {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main() {
    int t; 
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        printf("%d %d\n", demle(n), demchan(n));
    }
}