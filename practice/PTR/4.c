#include <stdio.h>
int main(void)
{
    int a = 5;
    int *p;
    p = &a;
    printf("%d\n", p);  //Address of p pointer.
    printf("%d\n", &a); //Address of a.
    printf("%d\n", &p); //Address of p var.
    printf("%d\n", *p); //Drefrencing.
}