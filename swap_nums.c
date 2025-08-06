#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b; // a now becomes the sum of original a and b
    b = a - b; // b now becomes the original a (a+b - b = a)
    a = a - b; // a now becomes the original b (a+b - a = b)

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}