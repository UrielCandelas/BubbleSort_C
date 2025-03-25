#include <stdio.h>

void bubbleSort(int *arr, int SIZE)
{
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        // Se intercambian los valores
        arr[j] = arr[j] ^ arr[j + 1];
        arr[j + 1] = arr[j] ^ arr[j + 1];
        arr[j] = arr[j] ^ arr[j + 1];
      }
    }
  }
}

int main(void)
{
  int SIZE;
  printf("Ingrese la cantidad de elementos para el array\n");
  scanf("%d", &SIZE);
  int array[SIZE];
  for (int i = 0; i < SIZE; i++)
  {
    int valor;
    printf("Ingrese el dato numero: %d del array\n", i + 1);
    scanf("%d", &valor);
    array[i] = valor;
  }
  bubbleSort(array, SIZE);

  printf("---------\n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d\n", array[i]);
  }

  return 0;
}