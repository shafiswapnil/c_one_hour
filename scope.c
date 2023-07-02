#include <stdio.h>

// VARIABLE DECLATION
// int a = 6;
int b = 7;
int n = 31;

// sample function
void functionOne()
{
  int m = 90;
  printf("m = %d\n", m);
}

void functionTwo()
{
  printf("n (from functionTwo) = %d\n", n);
  // see here we can access the n variable from anywhere (1)
}

int main()
{
  int a = 5;
  printf("a = %d\n", a);
  // first case: should return 5 (if the global varible from top isn't declared)
  // second case: can return 5 (if the global variable is declared. also see that global variable can be manupulated outside)

  printf("b = %d\n", b);
  // printing the global variable b (which declared outside of any block)

  functionOne();
  // printf("m = %d\n", m);     // error: use of undeclared identifier 'm'
  // this printf cannot print the value of m because m is declared abobe in another block (which is local to that function block only)

  functionTwo();
  printf("n (inside main function) = %d\n", n);
  // see here we can access the n variable from anywhere (2)

  return 0;
}