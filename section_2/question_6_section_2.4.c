#include <stdio.h>

int main() {
  int a, b, c, d, e, f;
  printf("a=%d, b=%d, c=%d, d=%d, e=%d, f=%d", a, b, c, d, e, f);
  // first run: a=72883088, b=1, c=68632312, d=1884979201, e=-2140535696, f=1
  // second run: a=10410896, b=1, c=6160120, d=-518160383, e=-2140535696, f=1
  return 0;
}