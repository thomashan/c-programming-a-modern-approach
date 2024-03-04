#include <stdio.h>

#define PI 3.14159265
#define VOLUME_CONSTANT 4.0 / 3.0 * PI

int readInput(void) {
  double input;
  scanf("%lf", &input);
  return input;
}

int main(void) {
  printf("Input the radius: ");
  int radius = readInput();
  double volume = VOLUME_CONSTANT * radius * radius * radius;
  printf("Volume: %f", volume);
  return 0;
}
