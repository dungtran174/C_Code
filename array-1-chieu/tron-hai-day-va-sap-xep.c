#include <stdio.h>

void selectionSort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }  
        int tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
}

void selectionSort1(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] > a[min]) {
                min = j;
            }
        }  
        int tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
}

int main() {
    int t; scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        int k = i + 1;
        int n; scanf("%d", &n);
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        selectionSort(a, n);
        selectionSort1(b, n);
        printf("Test %d:\n", k);
        for(int i = 0; i < n; i++) {
            printf("%d %d ", a[i] , b[i]);
        }
        printf("\n");
    }
}
