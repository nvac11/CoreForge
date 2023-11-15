
#include <stdio.h>
void Generate(int n, int * output , int (*f)(int)){
  for (int i = 0; i < n ; i++) {
    output[i] = f(i);
  }
}


int id(int i) {
  return i;
}

int main(int argc, char *argv[])
{
  int n = 10000;
  int output[n];
  Generate(n, output, id);
  
  for (int i = 0; i < n ; i++) {
    printf(" %d", output[i]);
  }

  return 0;
}
