#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

typedef struct binary_tree_s
{
    int n;                        // La valeur du noeud
    struct binary_tree_s *parent;  // Pointeur vers le parent
    struct binary_tree_s *left;    // Pointeur vers l'enfant gauche
    struct binary_tree_s *right;   // Pointeur vers l'enfant droit
} binary_tree_t;

int _putchar(char c);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);


#endif
