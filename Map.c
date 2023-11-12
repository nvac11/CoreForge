#include <stddef.h>
#include <stdio.h>




void Map(size_t (*f)(), int * arr , int length);

size_t Sum1Ton(int n){ 
  return n * (n + 1)/2; 
}

void Map(size_t (*f)(), int *arr , int length)
{
  for (int i = 0; i < length; i++) {
    arr[i] = f(arr[i]);   
  }
}

int main(int argc, char *argv[])
{
  int arr[]= {1, 2, 3, 4, 5};
  Map(Sum1Ton, arr, 5);
  
  for (int i = 0; i < 5; i++) {
    printf(" %d", arr[i]);
  }
  printf("\n");

  return 0;
}
