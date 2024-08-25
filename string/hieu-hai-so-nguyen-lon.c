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
void sub(char a[], char b[]) {
    int n1 = strlen(a), n2 = strlen(b), n = 0;
    int x[n1], y[n1], z[n1];
    for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
    for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
    reverse(x, n1); reverse(y, n2);
    for(int i = n2; i < n1; i++) {
        y[i] = 0;
    }
    int nho = 0 ;
    for(int i = 0; i < n1; i++) {
        int tmp = x[i] - y[i] - nho;
        if(tmp < 0) {
            nho = 1;
            z[n++] = tmp + 10;
        }
        else {
            z[n++] = tmp;
            nho = 0;
        }
    }
    int ok = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(z[i]) {
            ok = 1;
        }
        if(ok) printf("%d", z[i]);
    }
    if(!ok) printf("0");
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        char c1[1001], c2[1001];
        scanf("%s %s", c1, c2);
        if(strlen(c1) > strlen(c2) || (strlen(c1) == strlen(c2) && strcmp(c1, c2) > 0)) sub(c1, c2);
        else sub(c2, c1);
        printf("\n");
    }
}