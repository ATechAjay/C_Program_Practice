//Sum of digits...
#include <stdio.h>
long series(int n);
int main(void)
{
    int num;
    printf("Enter a number =>>");
    scanf("%d", &num);
    printf("Sum=%d", series(num));
}
long series(int n)
{
    int sum;
    if (n / 10 == 0) //Checked single digit...
        return n;
    sum = n % 10 + series(n / 10); //Remainder + sum of all digits except n%10.
    return sum;
}