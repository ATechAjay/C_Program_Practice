#include <stdio.h>
//There is no need of function declaration.
int prod(int x, int y)
//x and y are formal parameters
{
    int u;
    u = x * y;
    return u;
}
int main(void)
{
    int a, b, z;
    printf("Enter a and b =>>");
    scanf("%d%d", &a, &b);
    //a and b are actual args.
    z = prod(a, b);
    printf("Product=%d", z);
    return 0;
}