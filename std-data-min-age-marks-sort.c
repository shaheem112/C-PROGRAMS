#include <stdio.h>
#include <limits.h> // For INT_MAX

// Structure to store student information
struct Student {
    int age;
    int marks;
};

int main() {
    struct Student students[5];
    int i, j;

    // Input data for 5 students
    printf("Enter age and marks for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d (Age Marks): ", i + 1);
        scanf("%d %d", &students[i].age, &students[i].marks);
    }

    // Find minimum age
    int minAge = INT_MAX;
    for (i = 0; i < 5; i++) {
        if (students[i].age < minAge) {
            minAge = students[i].age;
        }
    }
    printf("\nMinimum Age: %d\n", minAge);

    // Find minimum marks
    int minMarks = INT_MAX;
    for (i = 0; i < 5; i++) {
        if (students[i].marks < minMarks) {
            minMarks = students[i].marks;
        }
    }
    printf("Minimum Marks: %d\n", minMarks);

    // Sort students by age in increasing order (Bubble Sort)
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (students[j].age > students[j+1].age) {
                // Swap students
                struct Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    // Display sorted student data
    printf("\nStudents sorted by age (increasing order):\n");
    printf("Age\tMarks\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%d\n", students[i].age, students[i].marks);
    }

    return 0;
}