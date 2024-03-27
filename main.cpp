#include <stdio.h>

void Output_Array_Info(int* array_ptr, int array_size) {
  printf("Array values:\n");
  for (int i = 0; i < array_size; i++) {
    printf("%d ", *(array_ptr + i));
  }
  printf("\n");

  printf("Array memory addresses:\n");
  for (int i = 0; i < array_size; i++) {
    printf("%p ", (array_ptr + i));
  }
  printf("\n");
}

int main() {
  int numbers[5] = {1, 2, 3, 4, 5};
  int* pointer = numbers;

  Output_Array_Info(pointer, 5);

  return 0;
}
