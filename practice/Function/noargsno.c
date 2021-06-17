//No args and no return value.
#include <stdio.h>
#include<stdlib.h>
//void type and void para.
//During function declaration!!
void menu(void);
int main(void)
{
    int choose;
    //no arguments
    menu();
    printf("Enter a choice =>");
    scanf("%d", &choose);
    if(choose==1)
        printf("Age");
    if(choose==2)
        printf("Name");
    if(choose==3)
        printf("Address");
    if(choose==4)
        printf("Dist");
    if(choose==5)
        printf("State");
    if(choose==6)
        printf("Country");
    if(choose==7)
        printf("Exit");
    //Not return a value.
    return 0;
}
void menu(void)
{
    printf("1. Enter Age\n");
    printf("2. Enter Name\n");
    printf("3. Enter Address\n");
    printf("4. Enter Dist\n");
    printf("5. Enter state\n");
    printf("6. Enter country\n");
    printf("7. Exit\n");
}