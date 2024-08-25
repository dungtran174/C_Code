#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++) {
        int s = n - 1;
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
            else {
                s--;
            }
        } 
        if(s == i) return 0;
        printf("Buoc %d: ", i + 1);
        for(int j = 0; j < n; j++) printf("%d ", a[j]);
        printf("\n");
    }
}