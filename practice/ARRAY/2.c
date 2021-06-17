#include <stdio.h>
int main(void)
{
    int w[3], i, add;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the element of the array[%d]", i);
        scanf("%d", &w[i]);
    }
    w[0] += 45;               //Calculation
    w[1] = 120;               //Assign
    w[2]++;                   //Increment by 1.
    add = w[0] + w[1] + w[2]; //Add all array elements.
    printf("%d\n", w[0]);
    printf("%d\n", w[1]);
    printf("%d\n", w[2]);
    printf("Addition=%d", add);
}