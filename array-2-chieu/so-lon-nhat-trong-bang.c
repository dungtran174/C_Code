#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int min_a = 1000000, min_b = 1000000; 

    for (int i = 0; i < N; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a < min_a) min_a = a;
        if (b < min_b) min_b = b;
    }

    // Số lần xuất hiện của giá trị lớn nhất
    long long result = 1ll * min_a * min_b;
    printf("%lld\n", result);

    return 0;
}