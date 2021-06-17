//Program to add all elements in an array
#include <stdio.h>
int main(void)
{
    int array[100];
    int i, n, sum = 0;
    printf("Enter the size of the array?? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Element -[%d]", i);
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("Sum = %d", sum);
}