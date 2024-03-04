#include <stdio.h>

int readInt() {
  int input;
  scanf("%d", &input);
  return input;
}

float readFloat() {
  float input;
  scanf("%f", &input);
  return input;
}

int main() {
  printf("Enter item number: ");
  int itemNumber = readInt();
  printf("Enter unit price: ");
  float unitPrice = readFloat();
  printf("Enter purchase date (mm/dd/yy): ");
  int day, month, year;
  scanf("%d/%d/%d", &month, &day, &year);
  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%2.2d/%2.2d/%2.2d\n", itemNumber, unitPrice, month, day,
         year);
}