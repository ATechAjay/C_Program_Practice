#include<stdio.h>
#include<conio.h>
int main (void)
{
    int n,count=0;
    printf("Enter a number=>>");
    scanf("%d",&n);
    do
    {
       n/=10;
       count++;
    } while (n>0);
    printf("Number of digits=%d",count);
    getch();
}