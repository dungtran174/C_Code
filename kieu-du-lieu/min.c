#include <stdio.h>

int fmin(int a, int b) {
    return (a < b) ? a : b;
}
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int min = fmin(a, fmin(b, c));
    printf("%d", min);
}