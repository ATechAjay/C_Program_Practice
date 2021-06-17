#include <stdio.h>
#include <math.h>
int prime(int num); //function declaration.
int main(void)
{
    int a;
    printf("Enter a number =>> ");
    scanf("%d", &a);
    if (prime(a)) //function calling.
        printf("Prime number");
    else
        printf("Not prime");
    return 0;
}
int prime(int num)
{
    int b;
    //square of 16 is 4 and
    //square of 17 is also 4.
    for (b = 2; b <= sqrt(num); b++)
        if (num % 2 == 0) //Checked if rem is 0.
            return 0;     //return 0 means not prime.
    return 1;             //return 1 means prime.
}