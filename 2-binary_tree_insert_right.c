#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *nodeRIGHT;

if (parent == NULL)
{
return (NULL);
}

nodeRIGHT = malloc(sizeof(binary_tree_t));

if (nodeRIGHT == NULL)
{
return (NULL);
}

nodeRIGHT->n = value;
nodeRIGHT->parent = parent;
nodeRIGHT-> right = NULL;
nodeRIGHT->left = NULL;

if (parent->right != NULL)
{
parent->right->parent = nodeRIGHT;
nodeRIGHT->right = parent->right;
}
parent->right = nodeRIGHT;

return (nodeRIGHT);
}
