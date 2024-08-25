#include <stdio.h>  

int countFactorsOf2(int n) {
    int count = 0;
    for (int i = 2; i <= n; i *= 2) {
        count += n / i;
    }
    return count;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int count = countFactorsOf2(n);
    if (count >= k) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}