#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a=2,b=2,x,y;
    x=4*(++a*2+3);
    y=4*(b++*2+3);
    printf("a=%d, b=%d, c=%d, d=%d",a,b,x,y);
    getch();
}