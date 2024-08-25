#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define MAX 100000

typedef struct {
    int value;
    int first_pos;
    int count;
} Element;

int compare(const void *a, const void *b) {
    Element *elemA = (Element *)a;
    Element *elemB = (Element *)b;
    return elemA->value - elemB->value;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        Element elements[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            elements[i].value = a[i];
            elements[i].first_pos = i;
            elements[i].count = 0;
        }

        qsort(elements, n, sizeof(Element), compare);

        int result = -1;
        int min_pos = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (i > 0 && elements[i].value == elements[i - 1].value) {
                elements[i].count = elements[i - 1].count + 1;
                if (elements[i].count > 1 && elements[i - 1].first_pos < min_pos) {
                    min_pos = elements[i - 1].first_pos;
                    result = elements[i].value;
                }
            } else {
                elements[i].count = 1;
            }
        }

        if (result != -1) {
            printf("%d\n", result);
        } else {
            printf("NO\n");
        }
    }
    return 0;
}