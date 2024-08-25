#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    scanf("%f%f", &a, &b);
    if(a == 0) {
        if(b == 0) {
            printf("Vo so nghiem\n");
        } else {
            printf("Vo nghiem\n");
        }
    }
    else {
        printf("%.2f", -b/a);
    }
}