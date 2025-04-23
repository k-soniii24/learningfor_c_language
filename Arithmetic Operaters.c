#include <stdio.h>

int main(void) {
  // Arithmetic Operaters
  // + - * / %
  // Arithmetic Operation Addition
  int a = 10;
  int b = 20;
  int c = a + b;
  printf("c = %d\n", c);

  // Arithmetic Operation Subtraction
  int d = b - a;
  printf("d = %d\n", d);
  // Arithmetic Operation Multiplication
  int e = a * b;
  printf("e = %d\n", e);
  // Arithmetic Operation Division
  float num1 = 10.0;
  float num2 = 3.0;
  float num3 = num1 / num2;
  printf("num3 = %f\n", num3);
  // Arithmetic Operation Modulus
  int num4 = 10;
  int num5 = 3;
  int num6 = num4 % num5;
  printf("num6 = %d\n", num6); // 1
  // Arithmetic Operation post Increment
  int num7 = 15;
  printf("num7 = %d\n", num7++);
  printf("num7 = %d\n", num7);
  // Arithmetic Operation post Decrement
  int num8 = 10;
  printf("num8 = %d\n", num8--);
  printf("num8 = %d\n", num8);

  // Arithmetic Operation pre Increment
  int num9 = 10;
  printf("num9 = %d\n", ++num9);
  printf("num9 = %d\n", num9);
  // Arithmetic Operation pre Decrement
  int num10 = 10;
  printf("num10 = %d\n", --num10);
  printf("num10 = %d\n", num10);

  return 0;
}