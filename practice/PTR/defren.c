//Find the size of pointer and pointer variable.
#include <stdio.h>
int main(void)
{
    char ch = 'A', *p1 = &ch;
    int i = 34, *p2 = &i;
    float f = 45.5, *p3 = &f;
    double d = 45.45, *p4 = &d;
    printf("size of p1 = %u, size of *p1 is %u\n", sizeof(p1), sizeof(*p1));
    printf("size of p2 = %u, size of *p2 is %u\n", sizeof(p2), sizeof(*p2));
    printf("size of p3 = %u, size of *p3 is %u\n", sizeof(p3), sizeof(*p3));
    printf("size of p4 = %u, size of *p4 is %u\n", sizeof(p4), sizeof(*p4));
}
