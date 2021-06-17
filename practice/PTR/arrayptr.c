#include <stdio.h>
int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5}, z;
    for (z = 1; z <= 5; z++)
    {
        printf("%d\n", z);       //Value
        printf("%d\n", &arr[z]); //Address
    }
}