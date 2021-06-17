#include <stdio.h>
int main(void)
{
    int n, notes, value, total;
    printf("Enter the value of RUPPEES=>>  ");
    scanf("%d", &n);
    printf("Enter starting NOTES value=>>  ");
    scanf("%d", &value);
    printf("\n\n\n");
    switch (value)
    {
    case 500:
        notes = n / 500;
        printf("500X%d=%d\n", notes, 500 * notes);
        total = 500 * notes;
        n = n % 500;
    case 100:
        notes = n / 100;
        printf("100X%d=%d\n", notes, notes);
        n = n % 100;
    case 50:
        notes = n / 50;
        printf("50X%d=%d\n", notes, notes);
        n = n % 50;
    case 20:
        notes = n / 20;
        printf("20X%d=%d\n", notes, notes);
        n = n % 20;
    case 10:
        notes = n / 10;
        printf("10X%d=%d\n", notes, notes);
        n = n % 10;
    case 5:
        notes = n / 5;
        printf("5X%d=%d\n", notes, notes);
        n = n % 5;

    case 2:
        notes = n / 2;
        printf("2X%d=%d\n", notes, notes);
        n = n % 2;

    case 1:
        notes = n / 1;
        printf("1X%d=%d\n", notes, notes);
        n = n % 1;
    }
    printf("Total=%d", total);
}