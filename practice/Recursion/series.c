#include <stdio.h>
int series(int p);
int main(void)
{
    int n;
    printf("Enter the number of terms  \n");
    scanf("%d", &n);
    printf("\b = %d\n\n", series(n));
    // \b is used for delete + sign...
}
int series(int p)
{
    int num;
    if (p == 0)
        return 0;
    num = p + series(p - 1);
    printf("%d+", p); //For 1+2+3+4+...+n
    return num;  
}