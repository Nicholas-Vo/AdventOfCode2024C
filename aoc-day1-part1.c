#include <stdio.h>
#include <stdlib.h>

/* Advent of Code 2024 */

int compareElements(const void *a, const void *b) {
  int valA = *(int *)a;  // obtain the actual int val from pointer a
  int valB = *(int *)b;  // obtain the actual int val from pointer b

  return (valA - valB);  // return the difference
}

int main() {
  int leftArr[] = {3, 4, 2, 1, 3, 3};
  int rightArr[] = {4, 3, 5, 3, 9, 3};

  int lSize = sizeof(leftArr) / sizeof(leftArr[0]);
  int rSize = sizeof(rightArr) / sizeof(rightArr[0]);

  qsort(leftArr, lSize, sizeof(int), compareElements);
  qsort(rightArr, rSize, sizeof(int), compareElements);

  int sum = 0;

  for (int i = 0; i < lSize; i++) {
    long diff = rightArr[i] - leftArr[i];

    sum = sum + abs(diff);
  }

  printf("Sum: %d", sum);

  return 0;
}
