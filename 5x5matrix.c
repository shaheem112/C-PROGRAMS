#include <stdio.h>

int main() {
    // Declare and initialize a 2D array to represent the 5x5 matrix
    int matrix[5][5] = {
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1}
    };

    // Print the matrix
    printf("The matrix is:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}