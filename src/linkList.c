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
    while(currentElement != NULL) {
        
        printf("Element %d data: %d\n", count, currentElement->info);
        
        currentElement = currentElement->nodePoint;

        count++;

    }
}

void freeList(node* header) {
    int count = 1;
    node* currentElement = header;
    node* targetElement = NULL;
    while(currentElement != NULL) {
        

        targetElement = currentElement->nodePoint;
        printf("Freed element %d\n", count);
        free(currentElement);
        currentElement = targetElement;

        count++;

    }
}

void deleteElement(int userDelInfo, node** header) // double pointer in param for updating header if header deleted
{
    

    // if list is empty
    if(*header == NULL) return;

    node* currentElement = *header;
    node* targetElement = NULL;


    // if header is deleted
    if(currentElement->info == userDelInfo) {
        *header = currentElement->nodePoint;
        free(currentElement);
        return;
    }

    // if inbetween deletion or end deletion
    while(currentElement != NULL) {

        targetElement = currentElement->nodePoint; // target element is next element

        if(targetElement == NULL) {
            break;
        }
        
        if (targetElement->info == userDelInfo) {

            currentElement->nodePoint = targetElement->nodePoint; //changing pointer of prev element to pointer of deleted element

            free(targetElement);
            break;
        }

        currentElement = targetElement;

        
    }

    
    
}




