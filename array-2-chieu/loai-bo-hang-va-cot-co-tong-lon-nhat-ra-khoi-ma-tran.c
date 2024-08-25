#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        int res = -1e9, hang, cot;
        //tong hang max
        for(int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = 0; j < m; j++) {
                sum += a[i][j];
            }
            if(sum > res) {
                res = sum;
                hang = i;
            }
        }  
        //tong cot max
        res = -1e9;
        for(int j = 0; j < m; j++) {
            int sum = 0;
            for(int i = 0; i < n; i++) {
                if(i != hang) {
                    sum += a[i][j];
                }
            }
            if(sum > res) {
                res = sum;
                cot = j;
            }
        }
        printf("Test %d:\n", i);
        for(int i = 0; i < n; i++) {
            if(i != hang) {
                for(int j = 0; j < m; j++) {
                    if(j != cot) {
                        printf("%d ", a[i][j]);
                    }
                }
                printf("\n");
            }
        }
        printf("\n");
    }
}