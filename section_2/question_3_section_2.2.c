#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

int getTotalWidth(int index) { return 2 * index + 1; }

int getTrailingSpaces(int height, int index) { return height - 1 - index; }

int getNumberOfAsterisks(int height, int constrainedWidth, int index) {
  int widthForHeightWithoutSpaces =
      getTotalWidth(height - 1) - getTrailingSpaces(height, index);
  return constrainedWidth < widthForHeightWithoutSpaces || index == 0 ? 1 : 2;
}

int getLeadingSpaces(int height, int constrainedWidth, int index) {
  int totalWidth = getTotalWidth(index);
  int trailingSpaces = getTrailingSpaces(height, index);
  int leadingSpaces = constrainedWidth - trailingSpaces - totalWidth;
  return leadingSpaces < 0 ||
                 leadingSpaces + trailingSpaces + totalWidth < constrainedWidth
             ? 0
             : leadingSpaces;
}

int getNumberOfMiddleSpaces(int height, int constrainedWidth, int index) {
  int trailingSpaces = getTrailingSpaces(height, index);
  int numberOfAsterisks = getNumberOfAsterisks(height, constrainedWidth, index);
  int maximumNumberOfMiddleSpaces = 2 * index - 1;
  maximumNumberOfMiddleSpaces =
      maximumNumberOfMiddleSpaces < 0 ? 0 : maximumNumberOfMiddleSpaces;
  int middleSpaces = constrainedWidth - trailingSpaces - numberOfAsterisks;
  return middleSpaces < maximumNumberOfMiddleSpaces
             ? middleSpaces
             : maximumNumberOfMiddleSpaces;
}

void drawLine(int height, int constrainedWidth, int index) {
  int leadingSpaces = getLeadingSpaces(height, constrainedWidth, index);
  for (int i = 0; i < leadingSpaces; i++) {
    printf(" ");
  }
  int numberOfAsterisks = getNumberOfAsterisks(height, constrainedWidth, index);
  bool drawLeadingAsterisk = numberOfAsterisks > 1;
  if (drawLeadingAsterisk) {
    printf("*");
  }
  int numberOfMiddleSpaces =
      getNumberOfMiddleSpaces(height, constrainedWidth, index);
  for (int i = 0; i < numberOfMiddleSpaces; i++) {
    printf(" ");
  }
  printf("*\n");
}

void draw(int height, int constrainedWidth) {
  for (int i = height - 1; i >= 0; i--) {
    drawLine(height, constrainedWidth, i);
  }
  printf("\n");
}

int main(void) {
  assert(getTrailingSpaces(6, 5) == 0);
  assert(getTrailingSpaces(6, 4) == 1);
  assert(getTrailingSpaces(6, 3) == 2);
  assert(getTrailingSpaces(6, 2) == 3);
  assert(getTrailingSpaces(6, 1) == 4);
  assert(getTrailingSpaces(6, 0) == 5);

  assert(getNumberOfAsterisks(6, 11, 0) == 1);
  assert(getNumberOfAsterisks(6, 11, 1) == 2);
  assert(getNumberOfAsterisks(6, 11, 2) == 2);
  assert(getNumberOfAsterisks(6, 11, 3) == 2);
  assert(getNumberOfAsterisks(6, 11, 4) == 2);
  assert(getNumberOfAsterisks(6, 11, 5) == 2);

  assert(getNumberOfAsterisks(6, 8, 0) == 1);
  assert(getNumberOfAsterisks(6, 8, 1) == 2);
  assert(getNumberOfAsterisks(6, 8, 2) == 2);
  assert(getNumberOfAsterisks(6, 8, 3) == 1);
  assert(getNumberOfAsterisks(6, 8, 4) == 1);
  assert(getNumberOfAsterisks(6, 8, 5) == 1);

  assert(getNumberOfMiddleSpaces(6, 11, 0) == 0);
  assert(getNumberOfMiddleSpaces(6, 11, 1) == 1);
  assert(getNumberOfMiddleSpaces(6, 11, 2) == 3);
  assert(getNumberOfMiddleSpaces(6, 11, 3) == 5);
  assert(getNumberOfMiddleSpaces(6, 11, 4) == 7);
  assert(getNumberOfMiddleSpaces(6, 11, 5) == 9);

  assert(getNumberOfMiddleSpaces(6, 8, 0) == 0);
  assert(getNumberOfMiddleSpaces(6, 8, 1) == 1);
  assert(getNumberOfMiddleSpaces(6, 8, 2) == 3);
  assert(getNumberOfMiddleSpaces(6, 8, 3) == 5);
  assert(getNumberOfMiddleSpaces(6, 8, 4) == 6);
  assert(getNumberOfMiddleSpaces(6, 8, 5) == 7);

  assert(getTotalWidth(0) == 1);
  assert(getTotalWidth(1) == 3);
  assert(getTotalWidth(2) == 5);
  assert(getTotalWidth(3) == 7);
  assert(getTotalWidth(4) == 9);
  assert(getTotalWidth(5) == 11);

  assert(getLeadingSpaces(6, 11, 0) == 5);
  assert(getLeadingSpaces(6, 11, 1) == 4);
  assert(getLeadingSpaces(6, 11, 2) == 3);
  assert(getLeadingSpaces(6, 11, 3) == 2);
  assert(getLeadingSpaces(6, 11, 4) == 1);
  assert(getLeadingSpaces(6, 11, 5) == 0);

  assert(getLeadingSpaces(6, 8, 0) == 2);
  assert(getLeadingSpaces(6, 8, 1) == 1);
  assert(getLeadingSpaces(6, 8, 2) == 0);
  assert(getLeadingSpaces(6, 8, 3) == 0);
  assert(getLeadingSpaces(6, 8, 4) == 0);
  assert(getLeadingSpaces(6, 8, 5) == 0);

  draw(6, 11);
  draw(6, 8);
}
