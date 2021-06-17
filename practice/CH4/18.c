#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a=10;
    a=a++ * a--;
    printf("%d\n",a);
    printf("%d",a++ * a++);
    getch();

}