#include <stdio.h>
#include <math.h>
int prime(int x);
int printp(int y, int z);
int main(void)
{
    int num1, num2;
    printf("Enter two number=>> ");
    scanf("%d%d", &num1, &num2);
    printf("The prime number between %d and %d are =>>\n", num1, num2);
    printp(num1, num2); //Call to function "printp" with args.
    return 0;
}
int printp(int y, int z)
{
    int r;
    for (r = y; r <= z; r++)
        if (prime(r))          //if value is "1" Then print prime num.
            printf("%d\t", r); //print prime num.
}
int prime(int x)
{
    int u;
    for (u = 2; u <= sqrt(x); u++)
        if (x % u == 0) //checking rem 0 or not??
            return 0;   //for not prime num.
    return 1;           //for prime num.
}