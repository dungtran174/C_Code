#include <stdio.h>

void selection_sort(int n, int a[]) {
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

int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int n; scanf("%d", &n);
    int a[n];
    int chan[n], le[n];
    int nChan = 0, nLe = 0;
    for(int i = 0; i < n; i++) {
        int x; scanf("%d", &x);
        if(x % 2 == 0) 
            chan[nChan++] = x;
        else 
            le[nLe++] = x;
    }
    selection_sort(nChan, chan);
    selection_sort(nLe, le);
    for(int i = 0; i < nChan; i++) printf("%d ", chan[i]);
    for(int i = 0; i < nLe; i++) printf("%d ", le[i]); 
}