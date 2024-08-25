#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

// tang dan
int cmp1(const void *a, const void *b) {
    int *x = (int *)a;
    int *y = (int *)b;
    return *x - *y;
}

// giam dan
int cmp2(const void *a, const void *b) {
    int *x = (int *)a;
    int *y = (int *)b;
    return *y - *x;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n, m;
        char option;
        scanf("%d %d %c", &n, &m, &option);
        int a[n], b[m], c[n+m];
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        for(int i = 0; i < m; i++) scanf("%d", &b[i]);
        int cnt = 0;
        if(option == 'T' || option == 'G') {
            for(int i = 0; i < n; i++) c[cnt++] = a[i];
            for(int i = 0; i < m; i++) c[cnt++] = b[i];
            if(option == 'T') qsort(c, cnt, sizeof(int), cmp1);
            else qsort(c, cnt, sizeof(int), cmp2);
            for(int i = 0; i < cnt; i++) printf("%d ", c[i]);
        } else if(option == 'F') {
            for(int i = 0; i < n; i++) printf("%d ", a[i]);
            for(int i = 0; i < m; i++) printf("%d ", b[i]);
        } else if(option == 'A') {
            for(int i = 0; i < m; i++) printf("%d ", b[i]);
            for(int i = 0; i < n; i++) printf("%d ", a[i]);
        }
        printf("\n");
    } 
}