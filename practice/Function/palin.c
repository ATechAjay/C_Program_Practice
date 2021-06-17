//program to find given number is palindrome or not.
#include <stdio.h>
int reverse(int x);
int plindrome(int y);
int main(void)
{
    int num;
    printf("Enter a number ");
    scanf("%d", &num);
    //function calling named "plindrome"
    if (plindrome(num))
        printf("Enter number is palindrome!!");
    else
        printf("Enter number is not palindrome:(");
}
int plindrome(int y)
{ //palidrome checking...
    if (y == reverse(y))
    //function calling named "reverse"
        return 1;
    return 0;
}
int reverse(int x)
{
    int r = 0;
    while (x > 0)
    {
        r = r * 10 + x % 10;
        x /= 10;
    }
    return r;
}