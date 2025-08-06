#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter the upper limit up to which you want to get sum: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of numbers from 1 to %d = %d\n", n, sum);
    return 0;
}