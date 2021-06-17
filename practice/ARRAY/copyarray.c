#include <stdio.h>
int main(void)
{
    int array[50], z, n;
    int copy[50];
    printf("Enter the size of the array=>> ");
    scanf("%d", &n);
    printf("\n");
    for (z = 0; z < n; z++)
    {
        printf("Element- [%d]= ", z);
        scanf("%d", &array[z]); //input from the user.
    }
    printf("\n");
    printf("Array Elements=>> ");
    for (z = 0; z < n; z++)
    {
        printf("%d\t", array[z]); //printing data elements.
    }
    for (z = 0; z < n; z++)
    {
        copy[z] = array[z]; //copied(Assingn) data into the new array.
    }
    printf("\n\nCopied Elements=>> ");
    for (z = 0; z < n; z++)
    {
        printf("%d\t", copy[z]); //printing copied element.
    }
}