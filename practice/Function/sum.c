#include <stdio.h>
int sum(int x, int y); //function declaration
int sum(int x, int y)
{
    int result;
    result = x + y;
    return result;
}
int main(void)
{
    int a, b, t;
    printf("Enter two num for addition");
    scanf("%d%d", &a, &b);
    t = sum(a, b);
    printf("Sum of %d and %d is %d", a, b, t);
    return 0;
}