#include <stdio.h>
int main(void)
{
    int a, b;
    //for lines
    for (a = 1; a <= 5; a++)
    {   //for stars.
        //logic- 5+1-a(For lines)
        for (b = 1; b <= 5 + 1 - a; b++)
        {
            printf("*");
        }
        printf("\n");
    }
}