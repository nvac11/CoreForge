#include <stdio.h>
#include <stdlib.h>
void take(int * output , int * input, int n)
{
  for (int i = 0; i < n; i++) {
    output[i] = input[i];
  }
}





int main(int argc, char *argv[])
{
  int n = 1000000;

  int * input = malloc(n * sizeof(int));
  for (int i = 0; i < n ; i++) {
    input[i] = i;
  }
  int nbToTake = 100000;
  int * output = malloc(nbToTake * sizeof(int));
  take(output, input, n);
  for (int i = 0; i < n; i++) {
    printf(" %d", input[i]); 
  }
  printf("\n");
  return 0;
}
