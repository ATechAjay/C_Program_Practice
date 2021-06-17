#include <stdio.h>
int main(void)
{
    int a = 45;
    int *p;   //first ptr "p"
    int **pp; //2nd ptr "pp"
    p = &a;   //Address of a in p(address of a=value of p).
    pp = &p;  //Address of p in pp(address of p=value of pp).
    printf("Address of a %d\n", &a);
    printf("Value of p %d\n", p);
    printf("Address of p %d\n", p);
    printf("Value of pp %d\n", *pp);
    printf("value of p = address of a is %d\n", p);
    printf("value of *p = value of a is %d\n", *p);
    printf("Address of p is %d\n", &p);
    printf("value of pp=address of p %d\n", pp);
    printf("Value of *pp=value of p %d\n", *pp);
    printf("Value of **pp=value of a %d\n", **pp);
    printf("Address of pp %d\n", &pp);
}