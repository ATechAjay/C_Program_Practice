//function without args and with return values
#include <stdio.h>
int prod();
int main(void)
{
    int ans;
    printf("Product of two numbers");
    ans = prod();
    printf("%d", ans);
}
int prod()
{
    int a, b;
    printf("\nEnter two num");
    scanf("%d%d", &a, &b);
    return a * b;
}