#include <stdio.h>
int opposite(int n);
int main(void)
{
    int s;
    printf("Ente a number ");
    scanf("%d", &s);
    printf("%d\n", opposite(s));
    return 0;
}
int opposite(int n)
{
    int opp = 0, y;
    while (n > 0)
    {
        opp = opp * 10;
        y = n % 10;
        opp = opp + y;
        //we can also write opp = opp * 10 + n % 10;
        n = n / 10;
    }
    return opp;
}