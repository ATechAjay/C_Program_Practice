#include<stdio.h>
#include<conio.h>
int main (void)
{
    int a=14,b,c;
    a=a%5;
    b=a/3;
    c=a/5%3;
    printf("%d %d %d",a,b,c);
    getch();
}