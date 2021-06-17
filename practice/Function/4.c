//function with args and without return value
#include <stdio.h>
void prod(int, int);
void main()
{
    int a, b;
    printf("Sum of two numbers ");
    printf("\nEnter two numbers ");
    scanf("%d%d", &a, &b);
    prod(a, b);
}
void prod(int a, int b)
{
    printf("Product is %d", a * b);
}