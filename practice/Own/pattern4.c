#include <stdio.h>
void main()
{
    int line, space, star, num;
    printf("Enter num of lines=>>  ");
    scanf("%d", &num);
    //for lines.
    for (line = 1; line <= num; line++)
    { //for spaces.
        for (space = 1; space <= (num - line); space++)
            printf(" ");
        //for stars.
        for (star = 1; star <= line; star++)
            printf("* ");//star and spaces
        printf("\n");//for new line after execute a line
    }
}