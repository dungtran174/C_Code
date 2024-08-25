#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int N, M, K;
    scanf("%d", &N);
    scanf("%d", &M);
    scanf("%d", &K);
    
    int positions[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &positions[i]);
    }
    // Create an array to mark the illuminated positions
    int illuminated[N + 1];
    memset(illuminated, 0, sizeof(illuminated));

    // Mark the positions illuminated by the existing lights
    for (int i = 0; i < M; i++) {
        int start = positions[i] - K;
        int end = positions[i] + K;
        if (start < 1) start = 1;
        if (end > N) end = N;
        for (int j = start; j <= end; j++) {
            illuminated[j] = 1;
        }
    }
    // Calculate the number of additional lights needed
    int additional_lights = 0;
    int i = 1;
    while (i <= N) {
        if (illuminated[i] == 0) {
            additional_lights++;
            int end = i + 2 * K;
            if (end > N) end = N;
            for (int j = i; j <= end; j++) {
                illuminated[j] = 1;
            }
            printf("%d\n", i);
        }
        i++;
    }
    printf("%d\n", additional_lights);
    return 0;
}