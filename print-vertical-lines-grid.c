#include <stdio.h>

int main() {
    int rows = 5; // Number of rows of vertical lines
    int cols = 5; // Number of columns of vertical lines

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("|\t"); // Print a vertical line followed by a tab for spacing
        }
        printf("\n"); // Move to the next line after printing a row
    }

    return 0;
}