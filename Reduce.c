#include <stddef.h>
#include <stdio.h>


int reduce_inner( int (*f)(), int * array, int n);



int reduce_inner(int (*f)(), int * array, int n) {
  int acc = array[n-1];
  for (int i = n - 2; i >= 0; i--) {
    acc = f(array[i], acc);
  }
  return acc;
}

int plus(int a , int b ) {
return a * b;
}


int main(int argc, char *argv[])
{
  int array[] = {1,2,3,4,5,6,7};
  int r = reduce_inner(plus, array, 7);
  
  printf("%d \n", r);

  return 0;
}
