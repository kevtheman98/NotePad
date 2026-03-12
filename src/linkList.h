#ifndef LINKLIST_H
#define LINKLIST_H


// define node (include node pointer inside node for linking)
typedef struct _linkedList {
    int info;
    struct _linkedList *nodePoint; // points to next struct
} node;

node* createNode(int data);
void insertNodeAfter (node* curNodePtr, node* nextPtr);
void transverseList(node* header);

#endif
