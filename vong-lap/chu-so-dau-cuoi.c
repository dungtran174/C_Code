#include <stdio.h>
#include <math.h>

int main() {
    long long n; 
    scanf("%lld", &n);
    int end = n % 10;
    while(n >= 10) {
        n /= 10;
    }
    int start = n;
    printf("%d %d", start, end);
}