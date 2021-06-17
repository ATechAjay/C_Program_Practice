#include <stdio.h>
int main(void)
{
    int line, space, star;
    for (line = 1; line <= 5; line++)
    {
        for (space = 1; space <= 5 - line; space++)
            printf(" ");
        for (star = 1; star <= 2 * line - 1; star++)
            printf("*");
        printf("\n");
    }
}