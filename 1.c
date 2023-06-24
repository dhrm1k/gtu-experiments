/*
 * Author: Dharmik
 * Description: This program is a basic calculator that performs arithmetic operations on two numbers.
 */

#include <stdio.h> 

int main() {
  double num1;
  printf("Enter number1: ");
  scanf("%lf", &num1);

  
  double num2;
  printf("Enter number1: ");
  scanf("%lf", &num2);
  
  char op;
  printf("Enter operator: ");
  scanf(" %c", &op);

  if (op == '+') {
    printf("Your answer is: %lf", num1 + num2);
  }
  else if (op == '-') {
    printf("Your answer is: %lf", num1 - num2);
  }
  else if (op == '*') {
    printf("Your answer is: %lf", num1 * num2);
  }
  else if (op == '/') {
    printf("Your answer is: %lf", num1 / num2);
  }
  else {
    printf("Such operator doesn't exist");
  }

  return 0;
  
}