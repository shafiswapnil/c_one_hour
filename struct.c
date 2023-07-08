#include <stdio.h>

// typedef int integerNumber;

typedef struct person
{
  char name[50];
  int age;
  int weight;
  int height;
} Person;

int main()
{
  Person demoperson;

  printf("Your name please: \n");
  scanf("%s", demoperson.name); // no ampersand (&) sign! think why?^1

  printf("Your age: \n");
  scanf("%d", &(demoperson.age)); // addded ampersand (&) sign

  printf("Your weight: \n");
  scanf("%d", &(demoperson.weight));

  printf("Your height: \n");
  scanf("%d", &(demoperson.height));

  printf("");

  return 0;
}

/* STRUCT (Not like a class)
 * it's a custom datatype
 * when to call the struct, we need to use `struct structIdentifier demoName;`
 */

/* HOW TO ACCESS STRUCT
 * to access a member of struct, we have to add a . (dot) after the struct type.
 */

/* TYPEDEF (Type Defination)/(Alias)
 * it's needed because of struct. when we call struct we have to use struct all the time.
 * thats why we need TYPEDEF
 * TYPEDEF makes custom alias for calling a type. like, if we define
 * `typedef int integerNumber;` outside the main function
 * then when we will need the `int` type, we have to write our custom made `integerNumber`
 */

/* WHEN USING `struct`
 * we can do it in two ways -
 * (1) when declaring, declare by this:
 * `typedef struct person {} Person;
 *
 * (2) another way can be:
 * `typedef struct {} Person;`
 *
 * the difference is:
 * typedef by default requires a name for it's type. so, when we are writing `typedef`
 * in front of struct, then we don't need a name for struct. because the struct identifier
 * is already been set with typedef.
 * that's why the two ways SHOWN ABOVE IS THE SAME.
 */

/* ^1
 * remember in arrays? we don't add "ampersand (&)" sign in scanf when taking input
 * for an ARRAY
 */