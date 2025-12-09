#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of a parent
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 *
 * Description:
 * - Creates a new node with the given value.
 * - If the parent already has a left child, the new node takes its place.
 * - The old left child becomes the left child of the new node.
 * - Always assigns the new node as the parent's left child.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
if (parent == NULL)
return (NULL);
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
{
return (NULL);
}
if (parent->left)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
parent->left = new_node;
return (new_node);
}
