#include <stdio.h>
#include <stdlib.h> // Để sử dụng qsort
#include <string.h>

struct item {
    int id;
    char name[101];
    char type[101];
    double buy, sell, profit;
};

typedef struct item item;

int cmp(const void *a, const void *b) {
    item *x = (item *)a;
    item *y = (item *)b;
    if (x->profit < y->profit)
        return 1;
    if (x->profit > y->profit)
        return -1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    item a[n];

    for (int i = 0; i < n; i++) {
        a[i].id = i + 1;
        getchar();
        gets(a[i].name);
        // a[i].name[strlen(a[i].name) - 1] = '\0'; // Loại bỏ ký tự newline cuối chuỗi
        gets(a[i].type);
        scanf("%lf %lf", &a[i].buy, &a[i].sell);
        a[i].profit = a[i].sell - a[i].buy;
    }

    qsort(a, n, sizeof(item), cmp);

    for (int i = 0; i < n; i++) {
        printf("%d %s %s %.2lf\n", a[i].id, a[i].name, a[i].type, a[i].profit);
    }

    return 0;
}
