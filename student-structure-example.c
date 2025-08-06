#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare and initialize a Student variable
    struct Student s1 = {"Aleena", 15, 90.0};

    // Print the details of the student
    printf("Student Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}