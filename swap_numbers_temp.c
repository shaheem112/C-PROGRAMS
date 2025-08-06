#include <stdio.h>

int main()
{
    int a, b, temp; // Use 'temp' for swapping

    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic using a temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}