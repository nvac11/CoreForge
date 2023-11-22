struct Node {
  int value;
  struct Node* next;
};



void push(struct Node ** headNode, int v);
void insertAtindex(struct Node ** headNode, int ind, int v);
void removeAtIndex(struct Node ** headNode, int ind);
void pop(struct Node ** headNode);
