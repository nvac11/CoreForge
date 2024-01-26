#include "functions.h"
#include <stdbool.h>

void inner_map(int (*f)(int), int *InputOuput, int size) {
  for (int i = 0; i < size; i++) {
    InputOuput[i] = f(InputOuput[i]);   
  }
}

bool inner_any(bool (*f)(int), int *Input, int size) {
  bool cond = false;
  for (int i = 0; i < size; i++) {
      cond = cond || f(Input[i]);
    }
  return cond;
}

bool inner_all(bool (*f)(int), int *Input, int size) {
  bool cond = true;
  for (int i = 0; i < size; i++) {
      cond = cond && f(Input[i]);
    }
  return cond;
}

void inner_repeat(int * Output, int * Input, int times, int size) {
  for (int i = 0; i < size * times; i++) {
    Output[i] = Input[i%size];
  }
}

void inner_drop(int * Output, int * Input, int nbToDrop, int size) {
  for (int i = 0; i < size; i++) {
    Output[i] = Input[i + nbToDrop];
  }
} 

void inner_concat(int * Output, int * Input1 , int * Input2, int size){
  for (int i = 0; i < size; i++) {
  Output[i] = Input1[i];
  Output[i+size] = Input2[i];
  }
}

void inner_scan(int (*f)(int,int), int * Output, int * Input, int size){
  int acc = 0;
  for (int i = 0; i < size; i++){
    Output[i] = f(acc, Input[i]);
    acc = Output[i];
  }
}

void inner_filter(bool (*f)(int), int *Output, int * Input, int * sizeOutput, int sizeInput){
  int i = 0;
  *sizeOutput = 0;
  while (i < sizeInput) {
    if(f(Input[i])){
      Output[*sizeOutput++] = Input[i];
    }
    i++;
  }
}

void inner_partition(bool (*f)(int), int * Output1, int * Output2, int * Input, int size){
  int o1 = 0;
  int o2 = 0;
  for (int i = 0; i < size ; i++) {
    if(f(Input[i])){
      Output1[o1++] = Input[i];
    } else {
      Output2[o2++] = Input[i];
    }
  }
}

void inner_zip(tuple *Output, int *Input1, int *Input2, int size){
  for (int i = 0; i < size; i++) {
    Output[i].a = Input1[i];
    Output[i].b = Input2[i];
  }
}

void inner_foreach(void (*f)(int), int *Input, int size){
  for (int i = 0; i < size; i++) {
    f(Input[i]);
  }
}

void inner_sort(bool (*f)(int, int), int *Input, int size){
  for (int i = 0; i < size ; i ++){
    int imin = i;
    for (int j = i; j < size; j ++){
      if (f(Input[j], Input[imin])){
        imin = j;
      }
    }
    int tmp = Input[i];
    Input[i] = Input[imin];
    Input[imin] = tmp;
  } 
}

void inner_chunk(int **Output, int *Input, int sizeChunk, int size){
 for (int i = 0; i < size ; i++){
    Output[i/sizeChunk][i%sizeChunk] = Input[i];
  }
}

void inner_generate(int (*f)(int), int *Output, int size) {
  for (int i = 0; i < size; i++) {
    Output[i] = f(i);
  }
}

int inner_reduce(int (*f)(int, int), int *Input, int size){
  int acc = Input[size-1];
  for (int i = size - 2; i >= 0; i--) {
    acc = f(Input[i], acc);
  }
  return acc;
}

void inner_zipWithIndex(tuple *Output, int *Input, int size)
{
  for (int i = 0; i < size; i++){
    Output[i].a = i;
    Output[i].b = Input[i];
  }
}

void inner_reverse(int *Output, int *Input, int size){
  for (int i = 0; i < size; i++) {
    Output[size-i-1] = Input[i];
  }

}

void inner_take(int *Output, int *Input, int nbToTake){
  for (int i = 0; i < nbToTake; i++) {
    Output[i] = Input[i];
  }
}

