#include <stdio.h>
int main(void)
{
    int a = 89;
    static int b = 34;
    printf("a=%d b=%d\n", a, b);
    a++;
    b++;
    printf("a=%d b=%d", a, b);
}