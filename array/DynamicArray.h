typedef struct {
int capacity;
int ActualSize;
int *array;
} DynamicArray;



void init(DynamicArray *tab, int capacity);
void append(DynamicArray *tab, int e);
int get(DynamicArray *tab, int i);
void set(DynamicArray *tab, int i, int e);
void delete_DynamicArray(DynamicArray *tab);

