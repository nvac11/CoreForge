#include <linux/limits.h>
#include <stdio.h>
#include <stdlib.h>


void chunk(int * input, int ** output, int n, int chunksize){
  for (int i = 0; i < n ; i++){
    output[i/chunksize][i%chunksize] = input[i];
  }
}




int main(int argc, char *argv[])
{
  int n = 100000000;
  int chunksize = 10;
  int * input = malloc(n * sizeof(int));
  for (int i = 0; i < n; i++){
    input[i] = i; 
  }
  int ** output = malloc(n/chunksize * sizeof(int*));
  for (int i = 0; i < n/chunksize; i++){
    output[i] = malloc(chunksize * sizeof(int)); 
  }
  chunk(input, output, n , chunksize);
  /*  
  for (int i = 0; i < n /chunksize; i++){
    printf(" %d |" ,i );

    for (int j = 0; j < chunksize; j++){
      printf(" %d " , output[i][j]);
    }
    printf(" \n ");

  }
  */
  return 0;
}
