#include <stdio.h>
#include <math.h>

int isPerfect(int n) {
    int sum = 1; // Bắt đầu từ 1 vì mọi số đều chia hết cho 1
    int sqrtN = (int)sqrt(n);
    for(int i = 2; i <= sqrtN; i++) {
        if(n % i == 0) {
            sum += i;
            if(i != n / i) sum += n / i; // Thêm ước số đối ứng nếu nó không phải là căn bậc hai của n
        }
    }
    return sum == n && n != 1; // Loại trừ 1 vì 1 không phải là số hoàn hảo
}

int main() {
    int a, b; scanf("%d%d", &a, &b);
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i = a; i <= b; i++) {
        if(isPerfect(i)) {
            printf("%d ", i);
        }
    }
}