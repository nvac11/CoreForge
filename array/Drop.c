#include <stdio.h>
#include <stdlib.h>
void Drop(int * output , int * input, int nbToDrop,  int n)
{
  for (int i = 0; i < n; i++) {
    output[i] = input[i+nbToDrop];
  }
}



int main(int argc, char *argv[])
{
  int n = 100000;

  int * input = malloc(n * sizeof(int));
  for (int i = 0; i < n ; i++) {
    input[i] = i;
  }
  int nbToDrop = 9000;
  int * output = malloc((n - nbToDrop) * sizeof(int));
  Drop(output, input, nbToDrop, n);
  for (int i = 0; i < (n - nbToDrop); i++) {
    printf(" %d", output[i]); 
  }
  printf("\n");
  return 0;
}
