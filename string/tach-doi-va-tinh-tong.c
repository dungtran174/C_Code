#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Hàm cộng hai chuỗi số lớn
void add_large_numbers(char *result, const char *num1, const char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int max_len = (len1 > len2) ? len1 : len2;
    int carry = 0;
    int i, j, k;

    result[max_len + 1] = '\0';
    for (i = len1 - 1, j = len2 - 1, k = max_len; k >= 0; i--, j--, k--) {
        int digit1 = 0;
        int digit2 = 0;

        if (i >= 0) {
            digit1 = num1[i] - '0';
        }

        if (j >= 0) {
            digit2 = num2[j] - '0';
        }

        int sum = digit1 + digit2 + carry;
        result[k] = (sum % 10) + '0';
        carry = sum / 10;
    }

    // Xóa số 0 ở đầu nếu có
    if (result[0] == '0') {
        memmove(result, result + 1, strlen(result));
    }
}

int main() {
    char c[201];
    gets(c);
    while (strlen(c) > 1) {
        int n = strlen(c);
        int mid = n / 2;

        char first[101] = {};
        char second[101] = {};

        strncpy(first, c, mid);
        strcpy(second, c + mid);

        char sum[202] = {};
        add_large_numbers(sum, first, second);
        printf("%s\n", sum);
        strcpy(c, sum);
    }
    return 0;
}
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main() {
//     char c[201];
//     gets(c);
//     while(strlen(c) > 1) {
//         int n = strlen(c);
//         int mid = n / 2;

//         char first[101] = {};
//         char second[101] = {};

//         strncpy(first, c, mid);
//         strcpy(second, c + mid);

//         int sum = atoi(first) + atoi(second);
//         printf("%d\n", sum);
//         sprintf(c, "%d", sum); // Chuyển tổng thành chuỗi và lưu vào c
//     }
//     return 0;
// }