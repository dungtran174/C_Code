#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        int a[n], dem[30001] = {0}, maxFreq = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            dem[a[i]]++;
            if (dem[a[i]] > maxFreq) {
                maxFreq = dem[a[i]];
            }
        }
        int printed[30001] = {0}; // Đánh dấu số đã được in
        for (int i = 0; i < n; i++) {
            if (dem[a[i]] == maxFreq && !printed[a[i]]) {
                printf("%d ", a[i]);
                printed[a[i]] = 1; // Đánh dấu số này đã được in
            }
        }
        printf("\n");
    }
    return 0;
}