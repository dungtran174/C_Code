#include <stdio.h>

int dem[10000001];
int main() {
    int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max = -1e9;
    for(int i = 0; i < n; i++) {
        dem[a[i]]++;
        if(a[i] > max) max = a[i];
    }
    int ok = 1;
    for(int i = 0; i < n; i++) {
        if(dem[a[i]] > 1) {
            printf("%d ", a[i]);
            dem[a[i]] = 1;
            ok = 0;
        }
    }
    if(ok == 1) printf("0");
} 