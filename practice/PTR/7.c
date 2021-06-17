#include <stdio.h>
int main(void)
{
    int x;
    int *p;
    p = &x;
    printf("%d\n", &p); //Address of P
    printf("%d\n", &x); //Address of x
}