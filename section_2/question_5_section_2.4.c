#include <stdio.h>

#define PI 3.14159265
#define VOLUME_CONSTANT 4.0 / 3.0 * PI

int main(void) {
  int radius = 10;
  double volume = VOLUME_CONSTANT * radius * radius * radius;
  printf("volume: %f", volume);
  return 0;
}
