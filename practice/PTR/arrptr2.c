#include <stdio.h>
int main(void)
{
    int a[] = {34, 43, 32, 54, 39, 56, 45};
    printf("%d\n", a);     //Address of 1st element
    printf("%d\n", &a[0]); //Address of 1st element
    printf("%d\n", &a[1]); //Address of 2nd element
    printf("%d\n", &a[2]); //Address of 3rd element
    printf("%d\n", &a[3]); //Address of 4th element
    printf("%d\n", &a[4]); //Address of 5th element
    printf("%d\n", &a[5]); //Address of 6th element
    printf("%d\n", &a[6]); //Address of 7th element
    printf("%d\n", a[0]);  //First element
    printf("%d\n", *a);    //First element
}