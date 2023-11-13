#include <stdio.h>
#include <stdlib.h>


void scan(int * input , int * output , int n , int (*f)(int, int)) {
    int acc = 0;
    for (int i = 0;i < n; i++) {
      output[i] = f(acc, input[i]) ;
      acc = output[i];
    }
  }

int sum(int a, int b){
  return a + b;
}


int main(int argc, char *argv[])
{
  int n = 10;
  int* input = malloc(n * sizeof(int));
  int* output = malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
  input[i] = i;
  output[i] = 0;
  }
  scan(input, output, n, sum);
  for (int i = 0; i < n; i++) {
    printf(" %d", output[i]);
  }
  
  return 0;
}
