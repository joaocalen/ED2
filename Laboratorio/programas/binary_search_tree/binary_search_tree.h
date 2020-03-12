#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

typedef struct binary_search_tree Bst;

Bst* bst_create_empty();

void bst_free_all();

void bst_add_new_key(int key,Bst* root);

void bst_print(Bst* root);

Bst* bst_add_node(int key);

#endif /* BINARY_SEARCH_TREE_H */