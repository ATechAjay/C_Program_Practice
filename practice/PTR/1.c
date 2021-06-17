#include <stdio.h>
int main(void)
{
    int x = 5, z=0;
    printf("%d\n", &x);
    printf("%u\n", &x);//print unsigned.
    x = 45;
    printf("%p", &x);//for print address.
}