#include <stdio.h>

#define CONSTANT 1234.123456789

int main(void) {
  printf("%-8.1e\n", CONSTANT);
  printf("%10.6e\n", CONSTANT);
  printf("%-8.3f\n", CONSTANT);
  printf("%6.0f\n", CONSTANT);
  /* output
1.2e+03
1.234123e+03
1234.123
  1234
  */
  return 0;
}
