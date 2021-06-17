#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a=3,b=4,c=3,d=4,x,y;
    x=(a=5)&&(b=7);
    y=(c=5)||(d=8);
    printf("%d %d %d %d %d %d\n",a,b,c,d,x,y);
    x=(a==6)&&(b=9);
    y=(c==6)||(d=10);
    printf("%d %d %d %d %d %d\n",a,b,c,d,x,y);
    getch();

}