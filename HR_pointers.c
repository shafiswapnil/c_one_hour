/* HackerRank - C Introduction - Pointers in C
https://www.hackerrank.com/challenges/pointer-in-c/problem
*/

#include <stdio.h>

void update(int *a, int *b)
{
  printf("%d %d\n", *a, *b);
}

int main()
{
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}