#include<stdio.h>
#include<conio.h>
int main(void)
{
    int a=10, b=3,max;
    // ERROR a>b?max=a:max=b;
    max=a>b?a:b;
    printf("%d\n",max);
    return 0;
    getch();

}