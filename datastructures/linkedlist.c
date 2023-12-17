#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "linkedlist.h"



void push(struct Node ** headNode, int v){
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->value = v;
  newNode->next = *headNode;
  *headNode = newNode;
}

void insertAtindex(struct Node **headNode, int ind, int v) {
  int i = 0;
  struct Node *prevNode = NULL;
  struct Node *currentNode = *headNode;
  while (i < ind){
    prevNode = currentNode;
    currentNode = currentNode->next;
    i++;
  }
  push(&currentNode, v);

  prevNode->next = currentNode;
}
void removeAtIndex(struct Node **headNode, int ind){
    if (*headNode == NULL) {
        printf("List empty !");
        return;
    }
  
    struct Node *prevNode = NULL;
    struct Node *currentNode = *headNode;
    int i = 0;

    while (currentNode != NULL && i < ind) {
        prevNode = currentNode;
        currentNode = currentNode->next;
        i++;
    }

    if (currentNode == NULL) {
        printf("Index out of range!");
        return;
    }

    if (prevNode == NULL) {
        // If the node to be removed is the head
        *headNode = currentNode->next;
    } else {
        prevNode->next = currentNode->next;
    }

    free(currentNode);
}


void pop(struct Node ** headNode){
  if (*headNode == NULL){
    printf("List empty !");
  } else {
    struct Node* tmpNode = *headNode; 
    *headNode = (*headNode)->next; 
    free(tmpNode);
  }
}


void display(struct Node * currentNode)
{
  if (currentNode != NULL){
    printf(" %d <=>", currentNode->value );
    display(currentNode->next);
  }else {
    printf(" NULL\n");
  }
}



int main(int argc, char *argv[])
{
  struct Node * head  = NULL;
  for (long i = 0; i < 10; i++) {
    push(&head, i);
  }
  insertAtindex(&head, 3, 145678);
  display(head);    
  removeAtIndex(&head,3);
  display(head);    
 

 


  
  return 0;
}
