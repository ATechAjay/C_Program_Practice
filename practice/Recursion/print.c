#include <stdio.h>
void print(int n);
int main(void)
{
    int num;
    printf("Enter the last number= >>");
    scanf("%d", &num);
    print(num);
}
void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);
    printf("%d\n", n);
    // print(n - 1);  For reverse order...
}
