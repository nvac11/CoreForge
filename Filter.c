#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> // Pour malloc

void FilterInner(int* output, int* input, bool (*f)(int), int ni, int* no) {
  int i = 0;
  *no = 0;
  while (i < ni) {
    if (f(input[i])) {
      output[*no] = input[i];
      (*no)++;
    }
    i++;
  }
}

bool isEven(int x) {
  return (x + 1) % 2; // Correction de la fonction isEven
}

int main(int argc, char* argv[]) {
  int n = 200000000;
  int *input = malloc(n * sizeof(int));
  
  if (input == NULL) {
    fprintf(stderr, "Erreur d'allocation mémoire pour input\n");
    return 1;
  }

  for (int i = 0; i < n; i++) {
    input[i] = i;
  }

  int *output = malloc(n * sizeof(int));
  int *no = malloc(sizeof(int)); // Allouer de la mémoire pour no
  
  if (output == NULL || no == NULL) {
    fprintf(stderr, "Erreur d'allocation mémoire pour output ou no\n");
    free(input); // Libérer la mémoire allouée pour input avant de quitter
    free(output);
    free(no);
    return 1;
  }

  FilterInner(output, input, isEven, n, no);
  /*
  for (int i = 0; i < *no; i++) {
    printf(" %d", output[i]);
  }
  printf("\n");
  */
  // Libérer la mémoire allouée pour input, output et no
  free(input);
  free(output);
  free(no);

  return 0;
}

