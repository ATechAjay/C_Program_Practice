#include<stdio.h>
#include<conio.h>
int main (void)
{
    int l;
    printf("Program for pritn reverse order:))\n");
    printf("Emter a number=>>");
    scanf("%d",&l);
    while (l>=2)
    {
     printf("%d\t",l);
     l=l-2;
    }
 getch();  
}