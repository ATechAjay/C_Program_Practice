//Program to count even or odd num in an array.
#include <stdio.h>
int main(void)
{
    int array[100];
    int i, n;
    int even = 0, odd = 0;
    printf("Enter the size of the array?? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Element - [%d]", i);
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Odd=%d  Even=%d", odd, even);
}