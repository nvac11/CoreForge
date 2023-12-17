#include <stdio.h>
#include <stdlib.h>

#define SIZE 100 // Taille de la table de hachage

// Structure pour stocker les éléments de la table de hachage
struct KeyValue {
    int key;
    int value;
    struct KeyValue *next; // Pointeur vers le prochain élément (en cas de collisions)
};

// Structure de la table de hachage
struct HashTable {
    struct KeyValue *table[SIZE];
};

// Fonction de hachage basique
int hashFunction(int key) {
    return key % SIZE;
}

// Initialisation de la table de hachage
void initializeHashTable(struct HashTable *ht) {
    for (int i = 0; i < SIZE; i++) {
        ht->table[i] = NULL;
    }
}

// Insertion dans la table de hachage
void insert(struct HashTable *ht, int key, int value) {
    int index = hashFunction(key);

    struct KeyValue *newNode = (struct KeyValue *)malloc(sizeof(struct KeyValue));
    if (newNode == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return;
    }

    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    if (ht->table[index] == NULL) {
        ht->table[index] = newNode;
    } else {
        // Gestion des collisions en ajoutant à la fin de la liste chaînée
        struct KeyValue *temp = ht->table[index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Recherche dans la table de hachage
int * search(struct HashTable *ht, int key) {
    int index = hashFunction(key);

    struct KeyValue *temp = ht->table[index];

    while (temp != NULL) {
        if (temp->key == key) {
            return &(temp->value);
        }
        temp = temp->next;
    }

    return NULL; // Retourne -1 si la clé n'est pas trouvée
}


