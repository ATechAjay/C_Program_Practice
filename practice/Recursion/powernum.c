#include <stdio.h>
int Power(int a, int n);
int main(void)
{
    int a, Result;
    int num;
    printf("Enter a number and a power number");
    scanf("%d%d", &a, &num);
    Result = Power(a, num); //Function call
    printf("Result=%d", Result);
    return 0;
}
int Power(int a, int n)
{
    int s;
    if (n == 0)
        return 1; //Becoz a^0 = 1;
    else
    {
        s = (a * Power(a, n - 1)); //Recursive call
        return s;
    }
}