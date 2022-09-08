#include <stdio.h>
#include <stdbool.h>         // to include boolean data types. NO NEED IN C++

int main() {
  int integer = 32;          // int can carry 32 bit
  int INTEGER = 32;
  int INTeger = 32;

  // long integerLong;                    // can carry 32 bit
  long long integerLong = 3948563784695;  // can carry 64 bit

  float floatNumber;    // can carry 32 bit
  double doubleNumber;  // can carry 64 bit

  char nameInitial = 'S';

  bool iAmAStudent = true;                // true is equal to = 1 | false is equal to = 0

  int a, b;
  float c, d;
  a = 47;
  b = 9;

  c = 12.0;           // IMPORTANT! if we write 12, compiler would think it is an integer. we should add .0 to fixup.
  c = (float)a;       // IMPORTANT! typecasting
  d = 10.0;

  int result = a/b;
  int remainder = a%b;
  int multiplication = a*b;

  float result2 = c/d;
  
  // printf("result = %d kbjhbdfg %d \n", result, a);
  printf("result = %d\nremainder = %d\n", result, remainder);

  printf("result2 = %f\n", result2);

  printf("Multiplication: %d", multiplication);

  // TRICKY PART! EASY!
  b=b+2;
  b+=2;

  // b/=10; // b=b/10

  printf("value of b: %d\n", b);

  int g = 1;
  g++;      // g=g+1
  printf("value of g: %d\n", g);

  
  // ANOTHER TRICKY PART^1
  int h = 1;
  printf("value of h (normal): %d\n", h);

  // printf("value of h: %d\n", h++);
  printf("value of h: %d\n", ++h);
  printf("value of h: %d\n", h);

  /* h--;
   * --h;
   */

  // scanf("");
  // printf("Hello world! \n");

  // getchar();
  return 0;
}

// scanf() asks user to input something
// getchar() waits for user to input something

// variables: "int" for integer. long for 
// when on decimal, its 5 and when in binary its 101
// related topic: 32 bit, reduce memory waste, keyword
// 32 bit means, computer can save 32 bits on an variable. Like, data type "int" and "long" can save 32 bits in memory (binary).
// if we double type, "long long" then it can save (32*2)=64 bits on memory

// memory wastage meaning: we should be careful when creating variables. if we need to run the code faster then we have to try taking the lowest possible space or memory to run the application.

// ARITHMATIC
// Addition (+)
// Subtraction (-)
// Multiplication (*)
// Division (/)
// Modulus (%)

// %d = replaces with digit
// %f = replaces with float number

// ODD EVEN
// if we divide by 2, if it returns 0 then its EVEN else it's ODD.

/* ^1
 * The thing is, we have set the h variable to 1.
 * then in printf, we have done h++. which returns 1. but in normal sense
 * it would return 2. BUT NO!
 * in third line, it's returning 2.
 * THE STORY IS, when first printed, it just printed the real value then
 * it added 1 to it. that's why in third line it returned 2.
 *
 * IF WE WANT TO print 2 in second line then,
 * we can use ++h! see the code above.
 */