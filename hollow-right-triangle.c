#include <stdio.h>

int main() {
    int n = 4;  // Number of rows

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            // Print 1 at the start, end of the row, or the bottom row
            if (j == 1 || j == i || i == n)
                printf("1 ");
            else
                printf("  "); // print space inside
        }
        printf("\n");
    }

    return 0;
}