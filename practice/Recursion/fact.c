#include <stdio.h>
long int fact(int n);
int main(void)
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    if (num < 0)
        printf("No fact of -ve number");
    else
        printf("Factorial is %d is %ld", num, fact(num)); //call
}
long int fact(int n)
{
    if (n == 0)
        return 1;
    return (n * fact(n - 1)); //recursive fun
                              //execute till n==0
}