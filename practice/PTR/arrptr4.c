#include <stdio.h>
int main(void)
{
    int arr[6] = {1, 23, 4, 56, 85, 69}, i;
    for (int i = 0; i < 6; i++)
    {
        printf("Elements [%d]\n", *(arr + i)); //Elements OR values
        //arr+i=index and * specifies the value on that index.
        printf("Address [%d]\n", arr + i); //Address
        //index comes from (arr+i)
    }
}