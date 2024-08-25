#include <stdio.h>
#define ll long long
void selectionSort(ll a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        ll temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        ll a[n];
        for(int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
            a[i] *= a[i];
        }
        selectionSort(a, n);
        int ok = 0;
        for(int i = n - 1; i >= 2 && !ok; i--) {
            int l = 0, r = i - 1;
            while(l < r) {
                ll sum = a[l] + a[r];
                if(sum == a[i]) {
                    printf("YES\n");
                    ok = 1;
                    break;
                }
                else if(sum < a[i]) {
                    ++l;
                } else {
                    --r;
                }
            }
        }
        if(!ok) {
            printf("NO\n");
        }
    }
}