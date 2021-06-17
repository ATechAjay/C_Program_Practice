#include <stdio.h>
void prime(int n);
int main(void)
{
    int num, x;
    printf("Enter a number");
    scanf("%d", &num);
    prime(num);
}
void prime(int n)
{
    int f = 2;
    if (n == 1)
        return;
    while (n % f != 0)
        f++;
    printf("%d", f);
    prime(n / f);
}
