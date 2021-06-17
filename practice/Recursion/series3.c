//Display same number using recursion.
#include <stdio.h>
void p(long int n);
int main(void)
{
    int s;
    printf("Enter a number =>> ");
    scanf("%d", &s);
    printf("%d", p(s));
}
void p(long int n)
{
    if (n / 10 == 0)
    {
        printf("%d", n);
        return;
    }
    p(n / 10);
    printf("%d", n % 10);
}
