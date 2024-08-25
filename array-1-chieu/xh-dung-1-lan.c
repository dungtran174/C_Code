#include <stdio.h>
int dem[1000001];
int main() {
    int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        dem[a[i]]++;
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(dem[a[i]] == 1) {
            count++;
        }
    }
    printf("%d\n", count);
    for(int i = 0; i < n; i++) {
        if(dem[a[i]] == 1) {
            printf("%d ", a[i]);
        }
    }
} 