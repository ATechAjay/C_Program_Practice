#include <stdio.h>
int main(void)
{
    int a = 35;        //a is an int
    int *p, **q, ***r; // p is ptr to an int
    // q is a ptr to a ptr to an int
    // r is a ptr to ptr to ptr to an int.
    p = &a;
    q = &p;
    r = &q;
    **q = 45; //*q=p,**q=a
    *(*(*r)) = 65;
}