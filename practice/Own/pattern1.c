#include <stdio.h>
int main()
{
    int a, b, n;
    printf("Enter num of lines=>>  ");
    scanf("%d", &n);
    //for rows
    for (a = 1; a <= n; a++)
    { //for stars
        for (b = 1; b <= a; b++)
        {
            printf("*");
        }
        //for next line.
        printf("\n");
    }
}