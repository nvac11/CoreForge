#include "CoreForge.h"
#include <stdio.h>
#include <stdlib.h>

int Sum1Ton(int n ){
  int s = 0; 
  for (int i = 0; i < n; i++){
    s += i;
  }
  return s;
}

int main(int argc, char *argv[])
{
  int size = 100000;
  int * array = malloc(sizeof(int)*size);
  
  for (int i = 0; i < size; i++) {
    array[i] = i ;//<< (i%5)  ;
  }

  CoreData * Coretab = convert(array, size);
  free(array);
  Coretab = map(Sum1Ton, Coretab);
  
  for (int i = 0; i < Coretab->ARRAY_SIZE; i++) {
    printf("%d\n", Coretab->ARRAY[i]);
  }
  


  return 0;
}
