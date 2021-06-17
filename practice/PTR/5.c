#include<stdio.h>
int main(void)
{
    int a=7;
    int *p;
    p=&a;
    printf("%d\n",*p);//Value of p=a
    printf("%d\n",p);//Address of p=a
    printf("%d\n",a);//value of a
    printf("%d\n",&a);//Address of a


}