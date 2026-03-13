#include <stdio.h>
#include <stdlib.h>
#include "linkList.h"

// type node pointer* (from struct) returns the created pointer
node* createNode(int data) {

    node* newNode = (node*)malloc(sizeof(node)); // newNode is a pointer on stack pointing to a space in heap that malloc allocated
    newNode->info = data;
    newNode->nodePoint = NULL;

    return newNode;
}

// 
void insertNodeAfter (node* curNodePtr, node* nextPtr) {
    node* tempVal = NULL;

    tempVal = curNodePtr->nodePoint; // null intially
    curNodePtr->nodePoint = nextPtr; // update current nodePtr with next one
    nextPtr->nodePoint = tempVal; // make next nodePtr null 
   
}

void transverseList(node* header) {
    int count = 1;
    node* currentElement = header;
    while(1) {
        
        printf("Element %d data: %d\n", count, currentElement->info);
        
        if(currentElement->nodePoint == NULL) {
            break;
        }
        currentElement = currentElement->nodePoint;

        count++;

    }
}




