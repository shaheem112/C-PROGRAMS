#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long int fact_func(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else if (n > 1) {
        return n * fact_func(n - 1);
    }
    // This case should ideally not be reached if n is non-negative,
    // but added for completeness.
    return 0;
}

// Function to display factorial information
void disp_func(int n) {
    if (n < 0) {
        printf("The factorial of a negative number doesn't exist!\n");
    } else {
        printf("Factorial of %d is: ", n);
        unsigned long long int fact = fact_func(n);
        printf("%llu\n", fact);

        // Optionally, if you want to display the multiplication sequence:
        /*
        printf("%d! = ", n);
        for (int i = n; i > 0; --i) {
            printf("%d", i);
            if (i > 1) {
                printf(" x ");
            }
        }
        printf(" = %llu\n", fact);
        */
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    disp_func(num);
    return 0;
}