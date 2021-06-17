#include <stdio.h>
void test(void);
int main(void)
{
    test();
    test();
    test();
}
void test(void)
{
    static int x = 50;
    int y = 70;
    printf("x=%d y=%d\n", x, y);
    x++;
    y++;
}