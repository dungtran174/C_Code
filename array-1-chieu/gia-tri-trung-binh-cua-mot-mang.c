#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    printf("%.3lf", sum/n);
}