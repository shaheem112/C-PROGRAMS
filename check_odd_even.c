#include <stdio.h>
int main()
{
    int a; // Only one variable 'a' is needed for odd/even check.
    printf(" Enter a number: ");
    scanf("%d", &a);

    // Check if 'a' is even or odd using the modulo operator
    if (a % 2 == 0)
    {
        printf(" Entered value is even\n");
    }
    else
    {
        printf(" Entered value is odd\n");
    }
    return 0; // 'return' should be lowercase.
}