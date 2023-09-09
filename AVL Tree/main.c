#include <stdio.h>
#include <stdlib.h>
#include "avl.h"


int main(){
    struct Node *root = NULL;
    root = insertNode(root, 22);
    root = insertNode(root, 14);
    root = insertNode(root, 75);
    root = insertNode(root, 44);
    root = insertNode(root, 25);
    root = insertNode(root, 63);
    root = insertNode(root, 98);
    printf("AVL Tree: ");
    printTree(root);
    printf("\nPreOrder: ");
    preOrder(root);
    printf("\nPosOrder: ");
    posOrder(root);

   return 0;
}