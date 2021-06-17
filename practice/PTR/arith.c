//Arihtmetic pointer.
#include <stdio.h>
int main(void)
{
    int i = 45, *ptr1 = &i;
    char c = 'A', *ptr2 = &c;
    float f = 23.3, *ptr3 = &f;
    printf("value of ptr1 or Address of i is %d \n", ptr1);
    printf("value of ptr2 or Address of c is %d \n", ptr2);
    printf("value of ptr3 or Address of f is %d \n", ptr3);
    printf("------------------------------------------------\n");
    printf("NOW !!\n");
    ptr1 = ptr1 + 2;
    printf("value of ptr1 or Address of i is %d \n", ptr1);
    ptr2 = ptr2 + 3;
    printf("value of ptr2 or Address of c is %d \n", ptr2);
    ptr3 = ptr3 + 2;
    printf("value of ptr3 or Address of f is %d \n", ptr3);
}