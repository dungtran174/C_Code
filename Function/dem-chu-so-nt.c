#include <stdio.h>
#include <string.h>

int laSoNguyenTo(char c) {
    return c == '2' || c == '3' || c == '5' || c == '7';
}

int main() {
    char n[19];
    int dem[10] = {0};
    scanf("%s", n);

    for (int i = 0; i < strlen(n); i++) {
        if (laSoNguyenTo(n[i])) {
            dem[n[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (dem[i] > 0 && laSoNguyenTo(i + '0')) {
            printf("%d %d \n", i, dem[i]);
        }
    }

    return 0;
}