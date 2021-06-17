#include<stdio.h>
#include<conio.h>
int main (void)
{
int n,rem,d,j=1,decimal=0;
printf("Program to find binary to decimal number\n");
printf("Enter the binary number=>>");
scanf("%d",&n);
while (n>0)

{   
    // taking last digit numbers
   rem=n%10;
    //    add 2^0,2^1...to the last bin number
    d=rem*j;
    //2^0*2...
    decimal=decimal+d;
    // 2^1,2^2,2^3...
    j=j*2;
    //skip the last digit number
    n=n/10;
}
printf("The decimal num of bin num is %d",decimal);
getch();
}