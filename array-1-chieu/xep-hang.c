#include <stdio.h>

void bubbleSort(int T[], int D[], int N) {
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (T[j] > T[j+1]) {
                // Swap T[j] and T[j+1]
                int temp = T[j];
                T[j] = T[j+1];
                T[j+1] = temp;
                // Swap D[j] and D[j+1]
                temp = D[j];
                D[j] = D[j+1];
                D[j+1] = temp;
            }
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int T[N], D[N];
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &T[i], &D[i]);
    }
    
    // Sort the customers by their arrival time
    bubbleSort(T, D, N);
    
    int current_time = 0;
    for (int i = 0; i < N; i++) {
        if (T[i] > current_time) {
            current_time = T[i];
        }
        current_time += D[i];
    }
    printf("%d\n", current_time);
    return 0;
}