#pragma once
#include <stdbool.h>
#include "datastructures.h"
void inner_map(int (*f)(int), int * InputOutput, int size);
bool inner_any(bool (*f)(int), int * Input, int size);
bool inner_all(bool (*f)(int), int * Input, int size);
void inner_repeat(int * Output, int * Input, int times, int size);
void innner_drop(int * Output, int * Input, int nbToDrop, int size);
void inner_concat(int * Output, int * Input1, int * Input2, int size);
void inner_scan(int (*f)(int, int), int * Output, int * Input, int size);
void inner_filter(bool (*f)(int), int * Output, int * Input, int * sizeOutput, int sizeInput);
void inner_partition(bool (*f)(int), int * Output1, int * Output2, int * Input, int size);
void inner_zip(tuple * Output, int * Input1, int * Input2, int size);
void inner_foreach(void (*f)(int), int * Input, int size);
void inner_sort(bool (*f)(int, int), int * Input, int size);
void inner_chunk(int ** Output, int * Input, int sizeChunk, int size);
void inner_generate(int (*f)(int), int * Output, int size);
int  inner_reduce(int (*f)(int, int), int * Input, int size);
void inner_zipWithIndex(tuple * Output, int * Input, int size);
void inner_reverse(int * Output, int * Input, int size);
void inner_take(int * Output, int * Input, int nbToTake);
