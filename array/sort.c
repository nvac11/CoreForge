#include <stdbool.h>
#include <stdio.h>


bool comp(int a, int b){
  return a < b;
}
void sort(int * input, int n , bool (*f)(int, int)){
  for (int i = 0; i < n ; i ++){
    int imin = i;
    for (int j = i; j < n; j ++){
     if (f(input[j], input[imin])){
        imin = j;
      }
    }
    int tmp = input[i];
    input[i] = input[imin];
    input[imin] = tmp;
  } 
}


int main(int argc, char *argv[])
{
  int n = 100000;
  int array[n];
  for (int i = 0; i < n; i++){
  array[i] = n-i;
  }

  sort(array, n, comp);
  for (int i  =0; i < n; i++) {
    printf(" %d", array[i]);

  }
  printf("\n");
  return 0;
}
