#include <stdio.h>

int findMax(int arr[], int size) {
  int max = arr[0];

  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}

int main() {
  int arr[] = {25, 11, 7, 75, 56};
  int size = sizeof(arr) / sizeof(arr[0]);

  int maxNumber = findMax(arr, size);

  printf("The maximum element in the array is: %d\n", maxNumber);

  return 0;
}
