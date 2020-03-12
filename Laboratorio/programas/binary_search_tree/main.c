#include "binary_search_tree.h"
int main(){
    Bst* root = bst_add_node(0);
    bst_add_new_key(2,root);
    bst_add_new_key(-2,root);
    bst_add_new_key(1,root);
    bst_add_new_key(-1,root);
    bst_add_new_key(3,root);
    bst_add_new_key(-3,root);
    // bst_add_new_key(4,root);
    // bst_add_new_key(-4,root);
    // bst_add_new_key(0,root);
    // bst_add_new_key(1,root);
    // bst_add_new_key(2,root);
    bst_print(root);
    bst_free_all(root);
}