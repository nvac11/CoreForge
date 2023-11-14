
#include <stdio.h>
typedef struct {
  int a;
  int b;
} tuple;




void ZipWithIndex(tuple * output, int n, int * input){
  for (int i = 0; i < n; i++){
    output[i].a = i;
    output[i].b = input[i];
  }
}

int main(int argc, char *argv[])
{
  int n = 1000;
  int input[n];
  
  for (int i = 0; i < n ; i++) {
    input[i] = (i % 10)*i; 
  }


  tuple output[n];
  ZipWithIndex(output, n, input);


  for (int i = 0; i < n; i++) {
    printf("(%d, %d),", output[i].a,output[i].b);
  }



  return 0;
}
