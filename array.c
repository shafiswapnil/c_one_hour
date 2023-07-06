#include <stdio.h>

int main()
{
  int userNum;
  int randomNum = 123432;

  /*
  printf("Please enter a number to multiply by %d: \n", randomNum);
  scanf("%d", &userNum); // scanf means, scan formatted
  printf("%d X %d = %d\n", userNum, randomNum, (userNum * randomNum));
  */

  // ARRAY
  /*
  int user5num[5] = {11231, 2234, 13, 234, 5123};

  for (int i = 0; i < 5; i++)
  {
    printf("Element [%d]: %d\n", i, user5num[i]);
  }
  */

  /*
  int user5num[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Enter a number to array index [%d]: \n", i);
    scanf("%d", &user5num[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Element [%d]: %d\n", i, user5num[i]);
  }
  */

  char userName[50]; // 50 character

  printf("Your name please: \n");
  scanf("%s", userName);
  printf("Hello, %s!\n", userName);

  return 0;
}

/* INTERESTING THING
 * when we declare an arry, if we need to assign something to the array from user
 * we will use `scanf()` as you already know
 * but when taking input for an array, we don't need to add "ampersand (&)" in scanf
 */

/* `char variableName[size]`
 * what actually happens is -
 * userName[0] = 'S';
 * userName[1] = 'h';
 * userName[2] = 'a';
 * userName[3] = 'f';
 * userName[4] = 'i';
 * userName[5] = '\0';
 *
 * this is what happens when we make character array
 * every letters are divided to an index.
 *
 * when the string finishes but the size still exists,
 * at the last index where the string finished, `%s` puts an '\0' (NULL character)
 * makes the compiler think the string has finished
 */