#include<stdio.h>
int main (void)
{
    int a,b;
    //Here a and b is LOCAL variable.
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    printf("Product=%d",a*b);
}