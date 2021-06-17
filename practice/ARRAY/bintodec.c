#include <stdio.h>
int main(void)
{
    // 1. Remainder
    // 2. Print remainder into reverse order.
    int array[100], num, z, y;
    printf("Enter a Binary number=>> "); // 1.
    scanf("%d", &num);
    for (z = 0; num > 0; z++)
    {
        array[z] = num % 2;
        num /= 2;
    }
    printf("Binary number is=>> ");
    for (y = z - 1; y >= 0; y--) // 2.
    {
        printf("%d", array[y]);
    }
}