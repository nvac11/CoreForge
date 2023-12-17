#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"
#include <omp.h>


void testHashTable() {
    struct HashTable ht;
    initializeHashTable(&ht);

    // Insertion de quelques éléments
    for (int i = 0; i < 100000; i++) {
    
      if (i != 11){
      insert(&ht, i, i*10%10000);
    }
  }
    // Recherche et affichage des résultats
    int * keys = malloc(sizeof(int) * 100000);
    for (int i = 0; i < 100000; i++) {
      keys[i] = i;
    }
    

    for (int i = 0; i < 1200; i++) {
        int *result = search(&ht, keys[i]);
        if (result != NULL) {
            printf("Clé %d : Valeur trouvée : %d\n", keys[i], *result);
        } else {
            printf("Clé %d : Non trouvée\n", keys[i]);
        }
    }
}

int main() {
    testHashTable();
    return 0;
}

