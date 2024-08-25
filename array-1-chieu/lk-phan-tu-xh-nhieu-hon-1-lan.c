#include <stdio.h>

int main() {
    int n, s = 0; 
    scanf("%d", &n);
    int a[n], f[100001] = {}, c[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        f[a[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(f[a[i]] > 1) {
            c[s++] = a[i];
            f[a[i]] = 1;
        }
    }
    printf("%d\n", s);
    for(int i = 0; i < s; i++) {
        printf("%d ", c[i]);
    }
}