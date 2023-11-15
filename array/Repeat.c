
#include <stdio.h>
#include <stdlib.h>

void repeat(int * input, int * output, int times, int n){
  for (int i = 0;i < n * times ; i++) {
    output[i] = input[i%n];
  }
}


int main(int argc, char *argv[])
{
  int n = 100000;
  int times = 5;
  int* input = malloc(n * sizeof(int));
  int* output = malloc(n * times * sizeof(int));
  for (int i = 0; i < n; i ++) {
    input[i] = i;
  } 
  
  repeat(input, output, times, n);
  for (int i = 0; i < n * times; i++) {
    printf(" %d", output[i]);
  }
  return 0;
}
