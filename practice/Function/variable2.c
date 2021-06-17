#include <stdio.h>
//function declaration
void name(void);
void name2(void);
//Global variable.
int x = 17, y;
int main(void)
{
  printf("In main function x=%d y=%d\n", x, y);
  //function calling to "name" fun.
  name();
  //function calling to "name2" fun.
  name2();
}
void name(void)
{
  int x = 99;
  //Higher precedence
  printf("In name function x=%d y=%d\n", x, y);
}
void name2(void)
{
  int y = 23, x = 67;
  //Higher precedence
  printf("In name2 function x=%d y=%d\n", x, y);
}