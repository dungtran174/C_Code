#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Hàm kiểm tra xem số có đẹp hay không
int check(char c[]) {
    int l = 0, r = strlen(c) - 1;
    while (l <= r) {
        if (c[l] != c[r] || (c[l] - '0') % 2 != 0) {
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    getchar(); // Đọc ký tự xuống dòng sau số bộ test

    while (t--) {
        char n[501];
        gets(n);
        // Loại bỏ ký tự xuống dòng ở cuối chuỗi nếu co

        if (check(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}