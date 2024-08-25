#include <stdio.h>
#include <string.h>

int a[201];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n = 0, tmp;
        memset(a, 0, sizeof(a));
        while (scanf("%d", &tmp) == 1) {
            a[n++] = tmp;
            if (getchar() == '\n') break; // Kiểm tra dấu kết thúc dòng
        }
        int le = 0, chan = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) chan++;
            else le++;
        }
        if ((chan > le && n % 2 == 0) || (le > chan && n % 2 == 1)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}