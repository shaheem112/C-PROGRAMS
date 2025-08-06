#include <stdio.h>

int main() {
    int a[2][2];
    int i, j; // Declare loop variables

    printf("Enter the elements of the 2x2 array: \n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix elements entered:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}