#include <stdio.h>
#include <conio.h>
int main(void)
{
    int a = 0, b = 0;
    if (!a) //ture not a is 1.
    {       //not a is 1 so b=1
        b = !a;
        //b=1
        if (b)
            //not b is 0 so a=0
            a = !b;
    }
    printf("a=%d   b=%d\n", a, b);
    return 0;
}