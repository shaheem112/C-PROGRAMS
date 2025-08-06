#include <stdio.h>

int main() {
    int n, i;
    double num, sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input validation for n
    if (n <= 0) {
        printf("Please enter a positive number of elements.\n");
        return 1; // Indicate an error
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &num);
        sum += num;
    }

    average = sum / n;

    printf("Sum = %.2lf\n", sum);
    printf("Average = %.2lf\n", average);

    return 0;
}