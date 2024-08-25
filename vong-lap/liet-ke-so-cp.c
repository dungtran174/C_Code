// #include <stdio.h>

// int is_cp(int n) {
//     int r = sqrt(n);
//     if(r * r == n) {
//         return 1;
//     }
//     else return 0;
// }

// int main() {
//     long long a, b; scanf("%lld%lld", &a, &b);
//     int cnt = 0;
//     if(a > b) {
//         long long tmp = a;
//         a = b;
//         b = tmp;
//     }
//     for(int i = a; i <= b; i++) {
//         if(is_cp(i)) {
//             cnt++;
//         }
//     }
//     printf("%d\n", cnt);
//     for(int i = a; i <= b; i++) {
//         if(is_cp(i)) {
//             printf("%d\n", i);
//         }
//     }
// }
#include <stdio.h>
#include <math.h>

int main() {
    long long a, b; scanf("%lld%lld", &a, &b);
    int start = ceil(sqrt(a)); // Tìm số chính phương đầu tiên lớn hơn hoặc bằng a
    int end = floor(sqrt(b)); // Tìm số chính phương cuối cùng nhỏ hơn hoặc bằng b
    int cnt = end - start + 1; // Tính số lượng số chính phương
    printf("%d\n", cnt);
    for(int i = start; i <= end; i++) {
        printf("%d\n", i*i); // In ra số chính phương
    }
    return 0;
}