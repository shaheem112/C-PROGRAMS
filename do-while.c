#include <stdio.h>

int main() {
    int n = 1;
    do {
        printf("%d ", n);
        n++;
    } while (n <= 100);
    printf("\n"); // Add a newline at the end for clean output
    return 0;
}