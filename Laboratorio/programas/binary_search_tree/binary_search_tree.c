#include "binary_search_tree.h"
#include <stdio.h>
#include <stdlib.h>

struct binary_search_tree
{
    int key;
    Bst* node_right;
    Bst* node_left;
};

void bst_free_all(Bst* tree)
{
    if(tree == NULL) return;
    bst_free_all(tree -> node_left);
    bst_free_all(tree -> node_right);
    free(tree);
    return;
}

void bst_add_new_key(int key, Bst* root)
{
    if(root == NULL) return;
    else if(key < root -> key)
    {
        if(root -> node_left == NULL)
        {
            root -> node_left = bst_add_node(key);
        } else bst_add_new_key(key,root -> node_left);
    }
    else if (key > root -> key)
    {
        if(root -> node_right == NULL)
        {            
            root -> node_right = bst_add_node(key);
        } else bst_add_new_key(key,root -> node_right);    
    }
    return;
}

Bst* bst_create_empty()
{
    Bst* empty_bst = (Bst*) malloc(sizeof(Bst));
    empty_bst -> node_left = NULL;
    empty_bst -> node_right = NULL;
    return empty_bst;
}

void bst_print(Bst* root)
{
    printf("<");
    if(root != NULL)
    {
        printf("%d",root->key);
        bst_print(root->node_left);
        bst_print(root->node_right);
    }
    printf(">");
    return;
}

Bst* bst_add_node(int key){
    Bst* new_node = bst_create_empty();
    new_node -> key = key;
    return new_node;
}