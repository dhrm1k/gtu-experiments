/*
 * Author: Dharmik
 * Description:  a program to calculate simple interest (i = (p*r*n)/100 )i = Simple interest
 */

#include <stdio.h> 

int main() {
  double principal_Amount;
  printf("Enter principal amount: ");
  scanf("%lf", &principal_Amount);

  double rate;
  printf("Enter rate: ");
  scanf("%lf", &rate);

  
  double n;
  printf("Enter n/time: ");
  scanf("%lf", &n);

  double i = (principal_Amount*rate*n)/100;
  printf("Simple interest is: %f", i);
  
  return 0;
}

// I also wanted to practice with functions, so below is a function that also works.

double i(double principal_Amount, double rate, double n){
  double i_calculated = (principal_Amount * rate * n)/100;
  return i_calculated;
}
