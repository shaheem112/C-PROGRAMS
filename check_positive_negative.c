#include <stdio.h>

int main() {
    int a; // Declare an integer variable 'a'

    printf("Enter a number: "); // Prompt the user to enter a number
    scanf("%d", &a); // Read the integer input from the user and store it in 'a'

    if (a < 0) { // Check if the entered number is less than 0
        printf("Entered no. is -ve\n"); // If true, print that the number is negative
    } else { // If the number is not less than 0 (i.e., it's 0 or positive)
        printf("Entered no. is +ve or zero\n"); // Print that the number is positive or zero
    }

    return 0; // Indicate successful program execution
}