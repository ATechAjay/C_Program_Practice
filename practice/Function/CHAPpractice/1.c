#include <stdio.h>
void func(void);
int main(void)
{
    printf("Hello");
    // goto hell; we can't use goto in the function.
    return 0;
}
void func(void)
{
hell:
    printf("Hi");
}