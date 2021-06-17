//Derefrencing pointer varialble.
#include <stdio.h>
int main(void)
{
    int y = 48, *p1 = &y;
    float z = 45.3, *p2 = &z;
    printf("%d\n",*p1);//value at p1; "value"
    printf("%d\n",p1);//Address of p1;
    printf("%f\n",p2);//Address
    printf("%f\n",*p2);//value at p2;
    printf("y=p1 %p\n",p1);
}