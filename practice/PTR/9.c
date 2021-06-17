#include <stdio.h>
int main(void)
{
    int a = 34;
    int *p;
    p = &a;
    printf("Address of p is %d\n", p);
    printf("Address of p+1 is %d\n", p + 1);
    printf("Becoz size of int is %d\n",sizeof(int));
    printf("Value of a is %d\n", *p);
}
