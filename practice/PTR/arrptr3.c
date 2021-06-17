#include <stdio.h>
int main(void)
{
    int a[] = {4, 3, 2, 56, 75, 45, 34, 23, 54, 64, 77};
    int o;
    for (int o = 0; o < 11; o++)
    {
        printf("ADDRESS %d\n", a + o);  //Address
        printf("value %d\n", *(a + o)); //value
    }
}