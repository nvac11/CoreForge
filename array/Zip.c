#include <stdio.h>
#include <stdlib.h>
typedef struct {
  int a;
  int b;
} Pair;

void ZipInner(Pair* output, int* input1, int* input2, int n ) {
  for (int i = 0; i < n; i++ ) {
    output[i].a = input1[i];
    output[i].b = input2[i];
  }
}

int main(int argc, char *argv[]) {
  int n = 50000000; 

  Pair *output = malloc(n * sizeof(Pair));
  int *input1 = malloc(n * sizeof(int));
  int *input2 = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    input1[i] = (i + 1)*3 % 10;
    input2[i] = (i + 2) % 10 ;
  }
  
  ZipInner(output, input1, input2, n);

  // Affichage du résultat
  /*
  for (int i = 0; i < n; i++) {
    printf("(%d, %d) ", output[i].a, output[i].b);
  }*/
  
  printf("\n");
  free(output);
  free(input1);
  free(input2);
  return 0;
}

