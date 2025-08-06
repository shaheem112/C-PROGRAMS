#include <stdio.h>

int main() {
    int i, j, rows, cols;

    printf("Enter Rows: ");
    scanf("%d", &rows);

    printf("Enter Columns: ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}