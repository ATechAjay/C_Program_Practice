#include <stdio.h>
int product(int a, int b);
int product(int a, int b)
{
    int result;
    result = a * b;
    return result;
}
int main(void)
{
    int a, b, z;
    printf("Enter two numbres =>> ");
    scanf("%d%d", &a, &b);
    z = product(a, b);
    printf("prodct of %d and %d id %d", a, b, z);
}