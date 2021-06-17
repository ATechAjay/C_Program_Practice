#include <stdio.h>
int main(void)
{
    int a = 25;
    int *p = &a;
    int *(*pp) = &p;
    printf("value of a =%d\n", a);
    printf("value of a =%d\n", *p);     //*p=25;
    printf("value of a =%d\n", *(*pp)); //**pp is 25
    printf("Address of a =%d\n", *pp);
    printf("Address of a =%d\n", &a);
    printf("Address of a = value of p =%d\n", *pp);
    printf("Address of a =%d\n", *pp);
}