#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as a left child
 * @parent: a pointer the left child
 * @value: the value to the new node
 * Return: return new_node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *nodeLEFT;

if (parent == NULL)
{
return (NULL);
}

nodeLEFT = malloc(sizeof(binary_tree_t));

if (nodeLEFT == NULL)
{
return (NULL);
}

nodeLEFT->n = value;
nodeLEFT->parent = parent;
nodeLEFT->left = parent->left;
nodeLEFT->right = NULL;

if (parent->left != NULL)
{
parent->left->parent = nodeLEFT;
}
parent->left = nodeLEFT;
return (nodeLEFT);
}
