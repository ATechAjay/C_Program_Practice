/*Program to find the sum of the series
1+2+4+7+11+16+...+n*/

//"difference" is the difference b/w two num
//"n" is the size of the series
//"nthNum" is the element of the series
#include <stdio.h>
#include <conio.h>
int main(void)
{
    int n, difference = 1, nthNum = 1;
    int long sum = 0;
    printf("Enter a numbers=>>");
    scanf("%d", &n);
    for (difference; difference <= n; difference++)
    {
        sum = sum + nthNum;
        nthNum = nthNum + difference;
    }
    printf("%d", sum);
    getch();

auto break case char const continue default do double else enum
extern float for goto if int long register return short signed sizeof 
static struct switch typedef 
union unsigned void volatile while
}