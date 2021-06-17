#include <stdio.h>
void drawline(); //Declaration of the function.
void drawline()  //function definition
{
    int a;
    for (a = 1; a <= 70; a++)
        printf("-");
}
void main(void)
{
    drawline(); //function calling (call to the function definition)
}