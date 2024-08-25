#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
void read_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void print_set(int set[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", set[i]);
    }
    printf("\n");
}
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
void find(int a[], int n, int b[], int m) {
    int giao[MAX] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                giao[a[i]] = 1;
            }
        }
    }
    int result[MAX], k = 0;
    for (int i = 0; i < MAX; i++) {
        if (giao[i] == 1) {
            result[k++] = i;
        }
    }
    qsort(result, k, sizeof(int), compare);
    print_set(result, k);
}

void find_difference(int a[], int n, int b[], int m) {
    int diff[MAX] = {0};
    for (int i = 0; i < n; i++) {
        diff[a[i]] = 1;
    }
    for (int i = 0; i < m; i++) {
        // if (reverse) {
            diff[b[i]] = 0;
        // } else {
        //     diff[b[i]] = -1;
        // }
    }
    int result[MAX], k = 0;
    for (int i = 0; i < MAX; i++) {
        if (diff[i] == 1) {
            result[k++] = i;
        }
    }
    qsort(result, k, sizeof(int), compare);
    print_set(result, k);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    read_array(a, n);
    read_array(b, m);

    find(a, n, b, m);
    find_difference(a, n, b, m);
    find_difference(b, m, a, n);

    return 0;
}