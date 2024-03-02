#include <stdio.h>

double readInput() {
  double input;
  scanf("%lf", &input);
  return input;
}

int main() {
  printf("Enter a dollar amount: ");
  double dollar = readInput();
  printf("With tax added: %.2lf", 1.05 * dollar);
}