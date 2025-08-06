#include <stdio.h>

int main() {
    // Declare variables to store marks for different subjects and total marks
    int marks1, marks2, marks3; // Assuming 3 subjects for simplicity
    int totalMarks;

    // Prompt the user to enter marks for each subject
    printf("Enter marks for Subject 1: ");
    scanf("%d", &marks1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &marks2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &marks3);

    // Calculate the total marks
    totalMarks = marks1 + marks2 + marks3;

    // Display the total marks
    printf("Total marks of the student: %d\n", totalMarks);

    return 0; // Indicate successful execution
}