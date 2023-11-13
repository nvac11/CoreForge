#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool any(int * input, bool (*f)(int), int n){
  bool cond = true;
  for (int i = 0; i < n ; i++) {
      cond = cond && f(input[i]);
    }
  return cond;
}

bool isEven (int x){
  return (x + 1) % 2;
}

int main(int argc, char *argv[])
{
  int n = 100000000;
  int *input = malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    
    input[i] = i*2;
  }
  printf("%d\n", any(input, isEven, n));
  return 0;
}
