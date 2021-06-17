#include<stdio.h>
#include<conio.h>
int main (void)
{
    int a=4,b=8,c=3,d=9,z;
    z=a++ + ++b * c-- - --d;
    printf("%d %d %d %d %d",a,b,c,d,z);
    getch();

}