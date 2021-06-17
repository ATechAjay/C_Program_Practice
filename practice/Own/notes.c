#include <stdio.h>
int main(void)
{
    int n, value, notes;
    printf("Enter the value of RUPPEES=>>  ");
    scanf("%d", &n);
    printf("Enter starting NOTES value=>>\n\n\n  ");
    scanf("%d", &value);
    switch (value)
    {
    case 500:
        notes = n / 500;
        printf("Value of 500Rs. notes=>> %d\n", notes);
        n = n % 500;
    case 100:
        notes = n / 100;
        printf("Value of 100Rs. notes=>> %d\n", notes);
        n = n % 100;
    case 50:
        notes = n / 50;
        printf("Value of 50Rs. notes=>> %d\n", notes);
        n = n % 50;
    case 20:
        notes = n / 20;
        printf("Value of 20Rs. notes=>> %d\n", notes);
        n = n % 20;
    case 10:
        notes = n / 10;
        printf("Value of 10Rs. notes=>> %d\n", notes);
        n = n % 10;
    case 5:
        notes = n / 5;
        printf("Value of 5Rs. notes=>> %d\n", notes);
        n = n % 5;

    case 2:
        notes = n / 2;
        printf("Value of 2Rs. notes=>> %d\n", notes);
        n = n % 2;

    case 1:
        notes = n / 1;
        printf("Value of 1Rs. notes=>> %d\n", notes);
        n = n % 1;
    }
}