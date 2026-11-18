#include <stdio.h>

int main() {
    int line, column;
    int matrix[100][100];

    scanf("%d %d", &line, &column);

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            if (j > 0) printf(" ");
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}