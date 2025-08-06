#include <stdio.h>

int main() {
    int n = 4;  // You can change this value to increase/decrease square size

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print 1 for border cells, space for inner cells
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                printf("1 ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}