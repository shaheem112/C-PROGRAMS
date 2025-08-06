#include <stdio.h>

int main() {
    char studentName[50];
    float subject1, subject2, subject3, subject4;
    float totalMarksObtained, percentage;
    int passingPercentage = 40; // Assuming a passing percentage of 40%
    int overallMaxMarks = 400; // Given in the problem (4 subjects * 100 marks/subject)

    // Get student's name
    printf("Enter student name: ");
    // Use fgets to read string with spaces
    // After scanf, there might be a newline character left in the buffer.
    // Use fgetc(stdin) to consume it, or use scanf(" %49[^\n]", studentName);
    // For simplicity, let's just use scanf for name as well, or ensure buffer is clear.
    // Or, consume the newline after the last scanf before fgets for string input.
    // Given the structure, fgets is good, but a clear buffer is needed.
    // Let's ensure previous newlines are cleared before fgets.
    fflush(stdin); // This might not be portable, use fgetc(stdin) loops instead if concerned.
    fgets(studentName, sizeof(studentName), stdin);

    // Get marks for 4 subjects
    printf("Enter marks for Subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &subject3);
    printf("Enter marks for Subject 4: ");
    scanf("%f", &subject4);

    // Calculate total marks obtained
    totalMarksObtained = subject1 + subject2 + subject3 + subject4;

    // Calculate percentage
    percentage = (totalMarksObtained / overallMaxMarks) * 100;

    // Display results
    printf("\n--- Student Report ---\n");
    printf("Student Name: %s", studentName); // studentName already includes newline from fgets
    printf("Marks in Subject 1: %.2f\n", subject1);
    printf("Marks in Subject 2: %.2f\n", subject2);
    printf("Marks in Subject 3: %.2f\n", subject3);
    printf("Marks in Subject 4: %.2f\n", subject4);
    printf("Total Marks Obtained: %.2f / %d\n", totalMarksObtained, overallMaxMarks);
    printf("Percentage: %.2f%%\n", percentage);

    // Check if student passed or failed
    if (percentage >= passingPercentage) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}