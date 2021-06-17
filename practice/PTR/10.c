#include<stdio.h>
int main (void)
{
    int a=4;
    int *p;
    p=&a;
    printf("%u\n",p);//Address of p
    printf("%u\n",*p);//value at p.
    a=3242;
    printf("%u\n",*p);//value at p.
    printf("%u\n",p);//Address of p

}