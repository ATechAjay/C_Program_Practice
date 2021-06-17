#include <stdio.h>
int add(void);
int main(void)
{
    printf("The sum of add num is\n");
    //calling without agrs.
    printf("Sum=%d", add());
    return 0;
}
int add(void)
{
    int n, num, sum = 0;
    printf("Enter last number =>> ");
    scanf("%d",&num);
    for (n = 1; n <= 25; n++)
    {
        if (n % 2 != 0)
            sum = sum + n * n;
    }
    //return the value of sum.
    return sum;
}