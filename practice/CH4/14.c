#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a=5,b=10,temp;
    temp=a,a=b,b=temp;
    printf("a=%d,b=%d,temp=%d",a,b,temp);
    getch();
}