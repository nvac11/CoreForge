#include <stdio.h>
#include <stdlib.h>
void concat(int * output, int * input1, int* input2, int n){
    for (int i = 0; i < n ; i++){
      output[i] = input1[i];
      output[n+i] = input2[i];
    }
  }



int main(int argc, char *argv[])
{
  int n = 10;
  int * input1 = malloc(n * sizeof(int));
  int * input2 = malloc(n * sizeof(int));
  int * output = malloc(2 * n * sizeof(int)); 
  
  for (int i = 0; i < n; i ++) {
    input1[i] = i;
    input2[i] = i;
  }

  concat(output, input1, input2, n);
  for (int i = 0;  i < 2 * n; i++) {
      printf(" %d", output[i]);
    
  }
  return 0;
}
