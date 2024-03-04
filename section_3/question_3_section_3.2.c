#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d", &a);
  scanf(" %d", &b);
  printf("a: %d\n", a);
  printf("b: %d\n", b);

  int c, d, e, f, g, h;
  scanf("%d-%d-%d", &c, &d, &e);
  scanf("%d -%d -%d", &f, &g, &h);
  printf("c: %d, d: %d, e: %d\n", c, d, e);
  printf("f: %d, g: %d, h: %d\n", f, g, h);

  float i, j;
  scanf("%f", &i);
  scanf("%f ", &j);
  printf("i: %f\n", i);
  printf("j: %f\n", j);

  float k, l, m, n;
  scanf("%f,%f", &k, &l);
  scanf("%f, %f ", &m, &n);
  printf("k: %f, l: %f\n", k, l);
  printf("m: %f, n: %f\n", m, n);
  /**
1 2 3-4-5 6-7-8 9 10 11,12 13,14 15
   * output
a: 1
b: 2
c: 3, d: 4, e: 5
f: 6, g: 7, h: 8
i: 9.000000
j: 10.000000
k: 11.000000, l: 12.000000
m: 13.000000, n: 14.000000
   */
  return 0;
}
