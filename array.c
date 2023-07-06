#include <stdio.h>

int main()
{
  int userNum;
  int randomNum = 123432;

  printf("Please enter a number to multiply by %d: \n", randomNum);
  scanf("%d", &userNum); // scanf means, scan formatted
  printf("%d X %d = %d\n", userNum, randomNum, (userNum * randomNum));

  return 0;
}