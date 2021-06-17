#include <stdio.h>
int main(void)
{
    int a = 20;
    int *ptr;
    ptr = &a;
    printf("value of ptr is %d\n", ptr);
    printf("Pointer value %d\n", *ptr);
    printf("Address of a is %d\n", &a);
    printf("----------------------------\n");
    printf("Post inc. %d\n", ptr++); //Assign then incremenet
    printf("Result post inc. %d\n", ptr);
    printf("pre inc. %d\n", ++ptr); //Increment then assign
    printf("Result pre inc. %d\n", ptr);
    printf("pre dec. %d\n", --ptr); //Decrement then assign
    printf("Result pre dec. %d\n", ptr);
    printf("post dec. %d\n", ptr--); //Assign then decrement
    printf("Result post dec. %d\n", ptr);
}