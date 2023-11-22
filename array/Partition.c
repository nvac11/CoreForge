#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


void partition(int * input , int * output1 , int * output2 , bool (*f)(int), int n ){
  int o1 = 0;
  int o2 = 0;
  for (int i = 0; i < n ; i++){
    if (f(input[i])){
      output1[o1] = input[i];
      o1++;
    }
    else{
      output2[o2] = input[i];
      o2++;
    }
  }
}




bool even(int nb){
  return (nb + 1) % 2;
}




int main(int argc, char *argv[])
{

  int n = 100000000;
  int *input = malloc(n * sizeof(int));
  int *output1 = malloc(n * sizeof(int));
  int *output2 = malloc(n * sizeof(int));
  for (int i= 0; i < n ; i++){
    input[i] = i;  
  }
  partition(input, output1, output2, even ,n);
  /*
  for (int i = 0; i < n ; i++){
    printf("%d |", output1[i] ) ;
  } 
  printf("\n\n\n\n");
  for (int i = 0; i < n ; i++){
    printf("%d |", output2[i] ) ;
  } 
  */


  return 0;
}
