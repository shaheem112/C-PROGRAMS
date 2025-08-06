#include <stdio.h>

int main()
{
    int i, m;
    printf("Enter the number for which you want to generate the multiplication table: ");
    scanf("%d", &m);

    printf("Multiplication Table of %d:\n", m);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", m, i, (m * i));
    }
    return 0;
}