#include <stdio.h>
int main(void)
{
    int array[50], n, r;
    printf("Enter the limit of array=>> ");
    scanf("%d", &n);
    for (r = 0; r < n; r++) //Input array elements
    {
        printf("Elemets - [%d] = ", r);
        scanf("%d", &array[r]);
    }
    printf("\n\nDisplaying the array elements\n");
    for (r = 0; r < n; r++) //For array elements
    {
        printf("%d\t", array[r]);
    }
    printf("\n");
    printf("\n");
    printf("Reverse order\n");
    for (r = n - 1; r >= 0; r--) //For reverse order
    {
        printf("%d\t", array[r]);
    }
    printf("\n");
    printf("\n");
}