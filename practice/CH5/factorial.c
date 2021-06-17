// Program to find the factorial of number
#include <stdio.h>
#include <conio.h>
int main(void)
{
    int n;
    long fact = 1;
    printf("Find factorial of a number\n");
    printf("Enter a number=>>");
    scanf("%d", &n);
    if (n < 0)
        printf("No factorial of the negative num\n");
    else
    {
        while (n > 1)
        {
            fact = fact * n;
            n--;
        }
        printf("Factorial of number=%d", fact);
    }
    getch();
}