typedef struct CoreData {
  int * ARRAY;
  int ARRAY_SIZE;
} CoreData;


int ** collect(CoreData * data);
CoreData * convert(int * array, int n);
CoreData * map(int (*f)(int), CoreData * data);
