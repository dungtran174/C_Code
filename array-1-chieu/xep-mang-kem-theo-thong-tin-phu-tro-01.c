#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ch;
    double value;
} Element;

int compare(const void *a, const void *b) {
    Element *elemA = (Element *)a;
    Element *elemB = (Element *)b;
    if (elemA->value < elemB->value) return -1;
    if (elemA->value > elemB->value) return 1;
    return 0;
}

void print_trace(Element arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ", arr[i].ch);
    }
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i].value);
    }
    printf("\n");
}

void process_test_case(int M, char a[], double b[]) {
    Element elements[M];
    for (int i = 0; i < M; i++) {
        elements[i].ch = a[i];
        elements[i].value = b[i];
    }

    qsort(elements, M, sizeof(Element), compare);
    print_trace(elements, M);

    while (M > 1) {
        elements[0].value += elements[1].value;
        elements[0].ch = elements[0].ch; // Keep the leftmost character
        for (int i = 1; i < M - 1; i++) {
            elements[i] = elements[i + 1];
        }
        M--;
        qsort(elements, M, sizeof(Element), compare);
        print_trace(elements, M);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int M;
        scanf("%d", &M);
        char a[M];
        double b[M];
        for (int i = 0; i < M; i++) {
            scanf(" %c", &a[i]);
        }
        for (int i = 0; i < M; i++) {
            scanf("%lf", &b[i]);
        }
        process_test_case(M, a, b);
    }
    return 0;
}