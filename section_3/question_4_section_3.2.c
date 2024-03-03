#include <stdio.h>

int main() {
  int day, month, year;
  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You entered the date %2.2d%2.2d%2.2d", year, month, day);
  return 0;
}