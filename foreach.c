#include <stdio.h>
void foreach(int* input, void (*f)(int) , int n){
  for (int i=0; i < n ; i++) {
    f(input[i]);
  }
}


void display(int x){
  printf("The number is %d\n", x);
}

int main(int argc, char *argv[])
{
  int input[] = {1,2,3,4,5};
  foreach(input, display, 5);
  return 0;
}
