#include <stdio.h>
#include <conio.h>
int main(void)

{
    void makeline();
    makeline();
}
void makeline()
{
    int a;
    for (a = 1; a <= 100; a++)
        printf("#");
}
