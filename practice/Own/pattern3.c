#include <stdio.h>
#include <conio.h>
int main(void)
{
    int line, space;
    for (line = 1; line <= 10; line++)
    {
        for (space = 1; space <= 10 - line; space++)
            printf(" ");
        for (space = 1; space <= line; space++)
            printf("*");
        printf("\n");
    }
}