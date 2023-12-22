#include "CoreForge.h"
#include "stdlib.h"
#include "functions.h"
#include <stdbool.h>

int ** collect(CoreData * data){
  
  return &(data->ARRAY);
}

CoreData * convert(int * array, int size){
  CoreData * data = malloc(sizeof(CoreData));
  data->ARRAY_SIZE = size;
  data->ARRAY = malloc(sizeof(int) * size);
  for (int i = 0; i < size; i++){
    data->ARRAY[i] = array[i];
  }  
  return data;
}

CoreData * map(int (*f)(int), CoreData * input){
  inner_map(f, input->ARRAY, input->ARRAY_SIZE);
  return input;
}

bool any(bool (*f)(int), CoreData * input){
  return inner_any(f, input->ARRAY, input->ARRAY_SIZE);
}

bool all(bool (*f)(int), CoreData * input){
  return inner_all(f, input->ARRAY, input->ARRAY_SIZE);
}

CoreData * repeat(CoreData * input, int times){
  int * output = malloc(sizeof(int) * times * input->ARRAY_SIZE);
  inner_repeat(input->ARRAY, output, times, input->ARRAY_SIZE);
  free(input->ARRAY);
  input->ARRAY = output;
  return input;
}
