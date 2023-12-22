#include "functions.h"
#include <stdbool.h>

void inner_map(int (*f)(int), int *InputOuput, int size){
  for (int i = 0; i < size; i++) {
    InputOuput[i] = f(InputOuput[i]);   
  }
}

bool inner_any(bool (*f)(int), int *Input, int size){
  bool cond = false;
  for (int i = 0; i < size; i++) {
      cond = cond || f(Input[i]);
    }
  return cond;
}

bool inner_all(bool (*f)(int), int *Input, int size){
  bool cond = true;
  for (int i = 0; i < size; i++) {
      cond = cond && f(Input[i]);
    }
  return cond;
}

void inner_repeat(int * Input, int * Output, int times, int size){
  for (int i = 0; i < size * times; i++) {
    Output[i] = Input[i%size];
  }
}

