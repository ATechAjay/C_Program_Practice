#include <stdio.h>
int main(void)
{
    int a = 100;
    int *ptr = &a;
    printf("%u\n", &a);    //print the address of a.
    printf("%d\n", *&ptr); //print pointer address value.
    printf("%d\n", *&a);   //print the value of a.
    printf("%d\n", ptr);   //print the address of a
    printf("%d\n", *ptr);  //print the value of of a
    printf("%d\n", &ptr);  //print the value of of a
    printf("%d\n", ptr);   //print the address of a
}