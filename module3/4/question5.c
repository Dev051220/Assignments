#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int arr[], int size, int asc) {
  int i, j, minIndex;

  for (i = 0; i < size - 1; i++) {
    minIndex = i;
    for (j = i + 1; j < size; j++) {
      if (asc) {
        if (arr[j] < arr[minIndex]) {
          minIndex = j;
        }
      } else {
        if (arr[j] > arr[minIndex]) {
          minIndex = j;
        }
      }
    }
    swap(&arr[minIndex], &arr[i]);
  }
}

int main() {
  int arr1[100], arr2[100], size1, size2, i, order;

  printf("Enter the size of the first array: ");
  scanf("%d", &size1);

  printf("Enter the elements of the first array:\n");
  for (i = 0; i < size1; i++) {
    scanf("%d", &arr1[i]);
  }

  printf("Enter the size of the second array: ");
  scanf("%d", &size2);

  printf("Enter the elements of the second array:\n");
  for (i = 0; i < size2; i++) {
    scanf("%d", &arr2[i]);
  }

  printf("Enter '1' for ascending order or '2' for descending order: ");
  scanf("%d", &order);

  selectionSort(arr1, size1, order == 1);
  selectionSort(arr2, size2, order == 1);

  printf("Sorted first array (in %s order):\n", order == 1 ? "ascending" : "descending");
  for (i = 0; i < size1; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  printf("Sorted second array (in %s order):\n", order == 1 ? "ascending" : "descending");
  for (i = 0; i < size2; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  return 0;
}
