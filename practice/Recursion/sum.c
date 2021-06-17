#include <stdio.h>
int sum(int n);
int main(void)
{
    int num;
    printf("Enter a number =>> ");
    scanf("%d", &num);
    printf("Sum = %d", sum(num)); //call to sum function.
}
int sum(int n)
{
    if (n == 0) //Base case if n==0 then return "0"
        return 0;
    return (n + sum(n - 1)); //Recursive call
}