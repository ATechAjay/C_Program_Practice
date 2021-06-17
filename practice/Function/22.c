#include <stdio.h>
int add(int x);
int main(void)
{
    int num;
    printf("Enter a number ");
    scanf("%d", &num);
    printf("Sum of digit %d is %d", num, add(num));
    return 0;
}
int add(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum = sum + x % 10; //find the rem and add it into sum.
        x = x / 10;         //for skip last digit.
    }
    return sum;
}
