#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char c[1001];
        scanf("%s", c);
        int len = strlen(c);
        int le = 0, chan = 0;
        // Kiểm tra tính hợp lệ của số
        if (c[0] == '0' || len > 1000) {
            printf("INVALID\n");
            continue;
        }
        int valid = 1;
        for (int i = 0; i < len; i++) {
            if (!isdigit(c[i])) {
                valid = 0;
                break;
            }
            if ((c[i] - '0') % 2 == 0) {
                chan++;
            } else {
                le++;
            }
        }
        if (!valid) {
            printf("INVALID\n");
            continue;
        }
        // Kiểm tra điều kiện số ưu thế
        if ((len % 2 == 0 && chan > le) || (len % 2 != 0 && le > chan)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}