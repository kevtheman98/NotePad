#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkList.h"


int main() {
    int userLen;
    int headerData;
    node* lastElement = NULL;

    printf("Length of list: \n");
    scanf("%d", &userLen);

    printf("Enter data for first element: \n");
    scanf("d", &headerData);;
    node* header = createNode(headerData);


    for (int i = 0; i < userLen; i++) {
        char currentElem[100];
        int elementData;

        sprintf(currentElem, "line", i);
        printf("%s\n", currentElem);

        printf("Enter data for element: \n");
        scanf("d", &elementData);

        node* currentElem = createNode(elementData);
        if (i == 0) {
            insertNodeAfter(header, currentElem);
            
        } else {
            insertNodeAfter(currentElem, lastElement);
        }

        lastElement = currentElem;
        

        
    }
    

    



}
