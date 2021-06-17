//function with args and return value
#include <stdio.h>
int prod(int, int);
int main(void)
{
    int a, b, rslt;
    printf("Prod of two num is");
    printf("\nEnter two numbers");
    scanf("%d %d", &a, &b);
    rslt=prod(a, b);
    printf("Prod of num is %d", rslt);
}
int prod(int a, int b)
{
    return a * b;
}