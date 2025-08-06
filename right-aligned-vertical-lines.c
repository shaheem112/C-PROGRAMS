#include <stdio.h>

int main() {
    int rows = 5; // You can change the number of rows as needed

    for (int i = 1; i <= rows; i++) {
        // Print spaces for right alignment
        for (int j = 1; j <= rows - i; j++) {
            printf("  "); // Two spaces for better visual alignment with '|'
        }
        // Print the vertical bars
        for (int k = 1; k <= i; k++) {
            printf("| "); // Vertical bar followed by a space
        }
        printf("\n"); // Move to the next line
    }
    return 0;
}