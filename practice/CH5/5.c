#include <stdio.h>
#include <conio.h>
int main(void)
{
    int a = 9, b = 0, c = 0;
    //! higher priority than <,|| operator.
    if (!a < 10 && !b || c)
        printf("Ajay yadav");
    else
        printf("VIjay yadav");
    return 0;
}