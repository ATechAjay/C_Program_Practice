#include <stdio.h>
int main(void)
{
    char a = 'a';
    char *p;
    p = &a;
    printf("Size of a %d\n", sizeof(a));  //value
    printf("Size of a %d\n", sizeof(*p)); //value
    printf("Size of p %d\n", sizeof(p));  //pointer
}