#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#define SIZE 100 // Taille de la table de hachage

struct KeyValue {
    int key;
    int value;
    struct KeyValue *next;
};

struct HashTable {
    struct KeyValue *table[SIZE];
};

void initializeHashTable(struct HashTable *ht);
int hashFunction(int key);
void insert(struct HashTable *ht, int key, int value);
int* search(struct HashTable *ht, int key);

#endif /* HASH_TABLE_H */

