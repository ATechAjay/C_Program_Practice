#include <stdio.h>
#include <conio.h>
int main(void)
{
    int i = 1, j = 15;
    if (i >= 5 && j < 5)//semicolon:)
        ;
    i = j + 5;
    printf("%d\n", i);
    return 0;
}