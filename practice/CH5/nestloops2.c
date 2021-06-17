#include <stdio.h>
int main(void)
{
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        printf("1\t");
        for (j = 0; j < 2; j++)
        {
            printf("2\t");
        }
        for (k = 0; k < 2; k++)
        {
            printf("3\t");
        }
    }
}