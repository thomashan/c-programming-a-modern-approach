/* Computes the dimensional weight of a box */
/* fomr input provided by the user */

#include <stdio.h>

#define CUBIC_IN_PER_LB 166

int readInput() {
  int input;
  scanf("%d", &input);
  return input;
}

int main() {
  printf("Enter height of box: ");
  int height = readInput();
  printf("Enter length of box: ");
  int length = readInput();
  printf("Enter width of box: ");
  int width = readInput();
  int volume = height * length * width;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n",
         (volume + CUBIC_IN_PER_LB - 1) / CUBIC_IN_PER_LB);

  return 0;
}