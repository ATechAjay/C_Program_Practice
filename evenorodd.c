#include<stdio.h>
#include<conio.h>
int main(void)
{
	int a;
	printf("Enter a number::   ");
	scanf("%d",&a);
	if(a%2==0)
	{
	printf("number is even\n");
	}
	else
	  {
		printf("Number is odd\n");
		a++;
		printf("Next even number is %d \n",a);
  	  }
		getch();
}