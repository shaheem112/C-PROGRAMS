#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // You can change the number of rows

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}