#include <stdio.h>
void reverse(int* input, int* output, int n){
  for (int i = 0; i < n; i++) {
    output[n-i-1] = input[i];
  }
}



int main(int argc, char *argv[])
{
  int n = 6;
  int input[] =  {1, 2, 3, 4, 9, 5};
  int output[6];
  reverse(input, output, n);
  for (int i = 0; i < 6; i++){
    printf(" %d", output[i]);
  }

  return 0;
}
