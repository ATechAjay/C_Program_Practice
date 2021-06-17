#include <stdio.h>
//function declaration.
int sum(int , int );
//function definition.
int sum(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
//function definition.
int product(int x, int y)
{
    int i;
    i = x * y;
    return i;
}
//function definition.
int sub(int x, int y)
{
    int q;
    q = x - y;
    return q;
}
//function definition.
int div(int x, int y)
{
    int u;
    u = x / y;
    return u;
}
int main(void)
{
    int a, b, x, v, n, r;
    printf("Enter two numberes =>> ");
    scanf("%d%d", &a, &b);
    //function calling.
    x = sum(a, b);
    //function calling.
    v = product(a, b);
    //function calling.
    n = sub(a, b);
    //function calling.
    r = div(a, b);
    printf("The sum of %d and %d is %d\n", a, b, x);
    printf("The product of %d and %d is %d\n", a, b, v);
    printf("The diffrence of %d and %d is %d\n", a, b, n);
    printf("The division of %d and %d is %d\n", a, b, r);
}
