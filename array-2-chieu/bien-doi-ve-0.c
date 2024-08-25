#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int board[N][N];
    char line[N + 1];

    for (int i = 0; i < N; i++) {
        scanf("%s", line);
        for (int j = 0; j < N; j++) {
            board[i][j] = line[j] - '0';
        }
    }

    int steps = 0;

    // Process the board from bottom-right to top-left
    for (int i = N - 1; i >= 0; i--) {
        for (int j = N - 1; j >= 0; j--) {
            if (board[i][j] == 1) {
                steps++;
                // Perform the swap operation on the sub-rectangle from (0, 0) to (i, j)
                for (int x = 0; x <= i; x++) {
                    for (int y = 0; y <= j; y++) {
                        board[x][y] = 1 - board[x][y];
                    }
                }
            }
        }
    }

    printf("%d\n", steps);

    return 0;
}