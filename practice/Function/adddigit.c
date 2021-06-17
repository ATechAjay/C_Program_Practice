 #include<stdio.h>
int add(int s);
int main (void)
{
    int num;
    printf("Enter a number =>>");
    scanf("%d",&num);
    printf("Sum =%d",add(num));
}
int add(int s)
{
    int sum=0;
    while (s>0)
    {
        sum=sum+s%10;
        s=s/10;
    }
    return sum;
}