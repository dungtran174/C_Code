#include <stdio.h>
#include <math.h>
int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a, int b) {
    return a < b ? a : b;
}
int main() {
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    scanf("%d%d%d%d", &x3, &y3, &x4, &y4);
    int a = max(max(x1, x2), max(x3, x4));
    int b = min(min(x1, x2), min(x3, x4));
    int c = a - b;
    int d = max(max(y1, y2), max(y3, y4));
    int e = min(min(y1, y2), min(y3, y4));
    int f = d - e;
    printf("%d", max(c, f) * max(c, f));
}