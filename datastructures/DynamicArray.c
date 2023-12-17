#include <stdlib.h>
#include <stdio.h>
#include "DynamicArray.h"
void init(DynamicArray *tab, int capacity) {
  tab->ActualSize = 0;
  tab->capacity = capacity;
  tab->array = malloc(sizeof(int)*capacity);
}

void delete_DynamicArray(DynamicArray *tab) {
  free(tab->array);
}

void append(DynamicArray *tab, int e) {
  if (tab->capacity == tab->ActualSize){
    int * newarray = malloc(sizeof(int) * tab->capacity * 2);
    for (int i = 0; i < tab->capacity; i++){
      newarray[i] = tab->array[i];
    } 
    free(tab->array);
    tab->array = newarray;
    tab->capacity *= 2;  
  } 
  tab->array[tab->ActualSize++] = e; 
}

int  get(DynamicArray *tab, int i) {
  return tab->array[i];
}

void set(DynamicArray *tab, int i, int e){
  tab->array[i] = e;
}

/*  
int main(){
  DynamicArray array;
  init(&array, 64); 

  for (int i = 0; i < 10000 ; i++){

  append(&array, i);
  printf("%d\n", get(&array, i));
  }
  printf("%d\n", array.capacity);
  delete(&array);
}*/
