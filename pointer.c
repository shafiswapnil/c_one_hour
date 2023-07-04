#include <stdio.h>
#include <stdlib.h>

/* // swap function 1 (not using pointer) (pass by value)
void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  printf("A: %d and B: %d (inside the function)\n", a, b);
}
*/

// swap function 2 (pass by reference)
void swap(int *a, int *b)
{
  int temp = (*a);
  (*a) = (*b);
  (*b) = temp;
  printf("A: %d and B: %d (inside the function)\n", *a, *b);
}

int main()
{
  int a = 10;
  int b = 12;

  printf("value of a is %d, and address is %p\n", a, &a);
  printf("value of b is %d, and address is %p\n", b, &b);

  // swap(a, b); // just passing the value
  swap(&a, &b); // passing the address of variable
  printf("A: %d and B: %d (outside the function)\n", a, b);

  // malloc
  int *pointerX, pointerY;
  pointerX = (int *)malloc(sizeof(int));
  printf("address of pointerX = %d , pointerY = %d and value of pointerX = %d\n", pointerX, pointerY, *pointerX);

  /* // experiment: assigning value to the integer without assigning its space
  pointerY = 19834589372465;
  printf("pointerY = %d\n", pointerY);
  */

  // remember to free the pointer from memory
  free(pointerX);

  return 0;
}

/* POINTERS
 * it is an address, it points to that address
 * to access an address of a variable, we have to use `&` before the variable name
 * use %p format specifier in printf to print address of a variable
 * an address is mainly hexadecimal value (means in computer ram)
 */

/* DECALRING A POINTER
 * typeName * variableName
 * example,
 * int * number;
 * char * text;
 * IT ACTUALLY SAVES THE ADDRESS OF A VARIABLE
 */

/* SAVING A VALUE IN POINTER
 * in general we use `number = 23498293;`
 * but to save value in pointer we have to use a `*` in front of variable. for example,
 * `*number = 123234;`
 * it means, assign the value to the address of the number variable
 * THIS CALLS - POINTER DEREFERENCING
 */

/* TO GET A POINTER VALUE
 * use `(*variableName)` to get the VALUE of the variable address
 */

/*
 * TERMS - Pass by value, Pass by reference
 */

/* WHAT SYSTEM IS DOING
 * when we declare a pointer, system gives an address (an envelope). but not enough space to store a value.
 * BUT TO ALLOCATE MEMORY TO POINTER -
 * 1. We use `malloc`
 * 2. Use `stdlib.h` (standard library) which contains `malloc`
 * 3. take a pointer first
 * 4. then use malloc. to use malloc, you have to define it's size! you can assign its size of an `integer`.
 *    use `sizeof()` to define the space for the pointer.
 *    lastly, type cast it. if the pointer is integer type pointer then type cast it by writing `(int *)` -
 *    in front of malloc.
 * 5. after using malloc, WE HAVE TO FREE THE SPACE by our own to the computer.
 *    use `free(variableName);` to freeup the space it took on memory.
 */

/* CLEARING CONFUSION
 * int x      => we can assign VALUE here
 * int *x2    => we can assign an ADDRESS here
 *
 * int x = 12;
 * int *x2 = &x;
 * int *x3 = &x;
 *
 * printf("x: %d, x2: %d, x3: %d\n",   );
 *                                  ^^^
 * THINK HERE! WHAT SHOULD WE WRITE
 *
 * printf("x: %d, x2: %d, x3: %d\n", x, *x2, *x3);
 * x = is a normal value
 * x2 = is a pointer, to get its value we will use *x2
 * x3 = is also a pointer and to get its value we will use *x3
 */