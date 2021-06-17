#include <stdio.h>
int main(void)
{
    int x=2845;
    int *p;
    p = &x; //&x = address of x
    printf("1   %d\n", p);//Address of pointer p.
    printf("2   %d\n", *p);//*p value at address pointed by p.
}