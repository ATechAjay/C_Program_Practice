#include <stdio.h>
int main(void)
{
    int array[5], z;
    for (z = 0; z < 5; z++)
    {
        printf("Enter a value for array[%d]=>> ", z);
        scanf("%d", &array[z]);
    }
    printf("Display array of elements=>>\t");
    for (z = 0; z < 5; z++)
    {
        printf("%d\t", array[z]);
    }
    printf("\n");
    printf("\n");
    printf("Element[0]= %d\n", array[0]);
    printf("Element[1]= %d\n", array[1]);
    printf("Element[2]= %d\n", array[2]);
    printf("Element[3]= %d\n", array[3]);
    printf("Element[4]= %d\n", array[4]);
}