#include<stdio.h>
int main(void)
{
    int a=5;
    int *p;
    p=&a;
    int **q;
    q=&p;
    int ***r;
    r=&q;
    printf("%u\n",*p);//5
    printf("%u\n",*q);//value of q or Adresss of p
    printf("%u\n",*r);//value of r
    printf("%u\n",*&p);//Address of p
    printf("%u\n",**q);//5
    printf("%u\n",***r);//5
}