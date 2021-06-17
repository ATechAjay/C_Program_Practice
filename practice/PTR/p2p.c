#include <stdio.h>
int main(void)
{
    int a = 54;
    int *p;
    p = &a;
    printf("----------1----------\n");
    printf("Address of a =%d\n", p);
    printf("Address of a =%d\n", &a);
    printf("--------------------\n");
    printf("Value of a =%d\n", *p);
    printf("Value of a =%d\n", a);
    printf("--------------------\n");
    *p = 24;
    int *(*q);
    q = &p;
    printf("----------2----------\n");
    printf("Address of p  =%d\n", q);
    printf("Address of p  =%d\n", &p);
    printf("--------------------\n");
    printf("value of p =%d\n", *p);
    printf("value of p =%d\n", *(*q));
    printf("--------------------\n");
    int *(*(*r));
    r = &q;
    printf("---------3-----------\n");
    printf("value of r =%d\n", &q);
    printf("value of ***r =%d\n", ***r);
    printf("--------------------\n");
}