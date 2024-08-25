#include <stdio.h>

void find(int a[], int n) {
    int maxLength = 1;
    int currentLength = 1;
    int start[n];
    int count = 0;
    // Tìm độ dài đoạn tăng dài nhất và lưu các chỉ số bắt đầu của các đoạn tăng dài nhất
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                count = 0;
                start[count++] = i - currentLength;
            } else if (currentLength == maxLength) {
                start[count++] = i - currentLength;
            }
            currentLength = 1;
        }
    }
    // Kiểm tra đoạn cuối cùng
    if (currentLength > maxLength) {
        maxLength = currentLength;
        count = 0;
        start[count++] = n - currentLength;
    } else if (currentLength == maxLength) {
        start[count++] = n - currentLength;
    }

    // In độ dài đoạn tăng dài nhất
    printf("%d\n", maxLength);
    // In các đoạn tăng dài nhất
    for (int i = 0; i < count; i++) {
        for (int j = start[i]; j < start[i] + maxLength; j++) {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    for (int test = 1; test <= t; test++) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        printf("Test %d:\n", test);
        find(a, n);
    }
    return 0;
}