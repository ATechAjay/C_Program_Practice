#include <stdio.h>
int sum(int x, int y);
int main(void)
{
    int a, b, z;
    printf("Enter a and b =>>");
    scanf("%d%d", &a, &b);
    //a and b are actual args.
    z = sum(a, b);
    printf("sum=%d", z);
    return 0;
}
int sum(int x, int y)
{
    int t;
    t = x + y;
    return t;
}