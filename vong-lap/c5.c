#include <stdio.h>

void extractDigits(char s[], char result[], int *length) {
    int i = 0;
    *length = 0; // Khởi tạo độ dài mảng kết quả là 0
    while (s[i] != '\0') {
        // Sử dụng vòng lặp while để thay thế cho if
        while (s[i] >= '0' && s[i] <= '9') {
            result[*length] = s[i]; // Lưu chữ số vào mảng result
            (*length)++; // Tăng độ dài mảng kết quả
            break; // Thoát khỏi vòng lặp while này để tránh lặp vô hạn
        }
        i++;
    }
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        char s[1001]; // Xâu đầu vào
        char result[1001]; // Mảng lưu trữ kết quả
        int length; // Độ dài mảng kết quả

        scanf("%s", s); // Đọc xâu S từ input

        // Gọi hàm extractDigits để lấy các chữ số từ xâu S
        extractDigits(s, result, &length);

        // Thay thế vòng lặp for bằng while để in ra các chữ số
        int i = 0;
        while (i < length) {
            printf("%c", result[i]);
            i++;
        }
        printf("\n"); // Xuống dòng sau khi in tất cả các chữ số
    }
    return 0;
}