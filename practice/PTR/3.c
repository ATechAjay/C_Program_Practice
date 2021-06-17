#include <stdio.h>
int main(void)
{
    int x = 1500;
    int *p = &x;
    printf("%d\n", *&p);//Address.
    printf("%u\n",*p);//1500
}