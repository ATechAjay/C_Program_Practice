#include<stdio.h>
#include<conio.h>
int main (void)
{
    int x,y,z;
    x=8++;
    y=++x++;
    z=(x+y)--;
    printf("x=%d,y=%d,z=%d",x,y,z);
    getch();
}