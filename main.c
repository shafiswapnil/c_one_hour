#include <stdio.h>
#include <stdbool.h>         // to include boolean data types. NO NEED IN C++

#define NUMBER 100           // PRE PROCESSOR DIRECTIVE

int main() {
  // Starting "Variables, Data types & Arithmetic"
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


  // STARTING "Logic, if-else, while and for loop,switch"
  a = 21;
  b = 65;

  /* if (a<NUMBER) {
    // inside these braces, it's called block!
    printf("%d is less than %d\n", a, NUMBER);
  } else {
    // we're in else block
    if (a==50) {
      printf("%d is equal to %d\n", a, NUMBER);
    } else {
      printf("%d is greater than %d\n", a, NUMBER);
    }
  } */

  // if we rewrite the if else again
  if (a < NUMBER) {
    printf("%d is less than %d\n", a, NUMBER);
  } else if (a == NUMBER) {
    printf("%d is equal to %d\n", a, NUMBER);
  } else {
    printf("%d is greater than %d", a, NUMBER);
  }

  
  // STARTING LOOP
  int counter = 0;
  counter = 1;

  // WHILE LOOP
  while (counter<20) {
    // first method
    // printf("Counter is %d\n", counter);
    // counter++;

    // second method
    // printf("Counter is %d\n", counter++);

    // third method
    // printf("Counter is %d\n", ++counter);

    // more increment
    // printf("Counter is %d\n", counter+=2);

    // multiplication ⚠️
    // printf("Counter is %d\n", counter*=2);
    /* WARNING!
     * this code will hung the execution because if we multiply a number with 0, result will be always ZERO.
    */

    // MULTIPLICATION (more important)
    // printf("Counter is %d\n", counter*=2);
    /* ATTENTION HERE!
     * Above code is printing till 32, but it has to be till 20. there's a fix for it below.
     */
    printf("Counter is %d\n", counter);
    counter*=2;
  }

  printf("current value of counter after loop: %d\n", counter);


  /* DO WHILE LOOP
   * think of a scenario that, in a while loop, if the condition is true then it executes.
   * if the condition is not true, then noting is the code block is executed.
   * SO,
   * if we want to execute at least once the code, then if it's false, it won't run again.
   */
  int counter2 = 50;
  
  do {
    printf("Counter2 is %d\n", counter2);
    counter2*=2;
  } while (counter2<20);


  // FOR LOOP
  for (int counter3 = 1; counter3 < 20; counter3*=2) {
    printf("counter3 is = %d\n",counter3);
  }

  for (int counter4 = 1; counter4 < 13; counter4++) {
    if (counter4 == 10) {
      continue; // meaning it will skip the iteration; program will skip when 10 is the value.
    }

    printf("counter4 is = %d\n", counter4);
  }


  int userNumber = 12;

  for (int counter5 = 1; counter5 < 30; counter5++) { // maximum we will go 30
    if (counter5 == userNumber) {
      break; // meaning it will stop the loop when the counter5 variable is 5.
    }

    printf("counter5 is = %d\n", counter5);
  }

  // HOMEWORK: use continue and break inside while and do while loop


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

// IMPORTANT STUFF!
// if we don't supply variable name in printf() statement after using format specifier, it'll temporarily replace with a garbage value.

// DEFINE OR MACRO OR PRE PROCESSOR DIRECTIVE
// has to be in UPPER CASE
// #define directive is used to declare some constant values or an expression with A NAME that can be used throughout our C program.

// while LOOP
// while loop means execute "until when".

