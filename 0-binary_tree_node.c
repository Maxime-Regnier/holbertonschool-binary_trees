#include <stdlib.h>
#include "binary_trees.h"
/**
 * 
 * 
 * 
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

    /* 1. Allouer la mémoire pour le nouveau nœud */
new_node = malloc(sizeof(binary_tree_t));

    /* 2. Vérifier l'allocation */
if (new_node == NULL)
{
return (NULL);
}
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
return (new_node);
}
