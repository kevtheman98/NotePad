#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkList.h"


int main() {
    int userLen;
    int headerData;

    printf("Length of list: \n");
    scanf("%d", &userLen);

    printf("Enter data for first element: \n");
    scanf("%d", &headerData);
    node* header = createNode(headerData);
    node* tail = header;


    for (int i = 0; i < userLen - 1; i++) {
        char newElemName[100];
        int elementData;

        printf("Enter data for element: \n");
        scanf("%d", &elementData);

        node* newElem = createNode(elementData);

        insertNodeAfter(tail, newElem);

        //Checking if works
        printf("Pointing: %p\n", (void*)tail->nodePoint);
        printf("Pointer: %p\n", (void*)newElem);
        
        tail = newElem;
    
    }    

}
