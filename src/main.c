#include <stdio.h>
#include <stdlib.h>

#include "linkList.h"


int main() {
    

    node* header = createNode(143);
    printf("Hello World.\n");
    printf("Data: %d\n", header->info);
    printf("Pointer: %p\n", (void*)header->nodePoint);


}
