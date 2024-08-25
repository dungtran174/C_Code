#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void reverse(int a[], int n) {
    int l = 0, r = n - 1;
    while(l < r) {
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l; --r;
    }
}
// coi a co nhieu chu so hon b
void add(char a[], char b[]) {
    int n1 = strlen(a), n2 = strlen(b), n = 0;
    int x[n1], y[n1], z[n1 + 1];
    for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
    for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
    reverse(x, n1); reverse(y, n2);
    for(int i = n2; i < n1; i++) {
        y[i] = 0;
    }
    int nho = 0 ;
    for(int i = 0; i < n1; i++) {
        int tmp = x[i] + y[i] + nho;
        z[n++] = tmp%10;
        nho = tmp/10;
    }
    if(nho > 0) z[n++] = nho;
    for(int i = n - 1; i >= 0; i--) {
        printf("%d", z[i]);
    }
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        char c1[1001], c2[1001];
        scanf("%s %s", c1, c2);
        if(strlen(c1) > strlen(c2)) add(c1, c2);
        else add(c2, c1);
        printf("\n");
    }
}