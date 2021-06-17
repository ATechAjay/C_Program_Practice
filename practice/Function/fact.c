//factorial using function.
#include <stdio.h>
long factorial(int x);
int main(void)
{
    int num;
    printf("Enter a number ");
    scanf("%d", &num);
    if (num < 0)
        printf("No fact of -ve number", num);
    else
        factorial(num);
    printf("Factorial is %d", factorial(num));
}
long factorial(int x)
{
    int i;
    long fact = 1;
    if (x == 0)
        return 1;
    for (i = x; i > 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}