#include <stdbool.h>

void inner_map(int (*f)(int), int * InputOutput, int size);
bool inner_any(bool (*f)(int), int * Intput, int size);
bool inner_all(bool (*f)(int), int * Intput, int size);
void inner_repeat(int * input, int * output, int times, int size);
