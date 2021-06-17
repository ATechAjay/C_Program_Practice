#include <stdio.h>
int main(void)
{
    int n = 45, i = 2;
    printf("Before While i=%d\n", i);
    printf("Before While n=%d\n", n);
    while (n % i != 0)
        i++;
    printf("After While i=%d\n", i);
    printf("After While n=%d\n", n);
}