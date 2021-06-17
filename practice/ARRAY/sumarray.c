#include <stdio.h>
int main(void)
{
    int array[50], n, z, sum = 0;
    printf("Enter the limit of array=>> ");
    scanf("%d", &n);
    for (z = 0; z < n; z++) //Input array elements
    {
        printf("Elemets - [%d] = ", z);
        scanf("%d", &array[z]);
    }
    printf("\n\nElements of this Array=>> \n");
    for (z = 0; z < n; z++)
    {
        printf("%d\t", array[z]);
    }
    printf("\n");
    for (z = 0; z < n; z++)
    {
        sum = sum + array[z];
    }
    printf("\n%d", sum);
}
