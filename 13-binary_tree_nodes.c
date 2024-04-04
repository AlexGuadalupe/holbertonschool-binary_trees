#include "binary_trees.h"

/**
 * binary_tree_nodes - counts node with atleast 1 child
 * @tree: a pointer to the root node
 * Return: 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

if (tree->left || tree->right)
{
size_t left_nodes = binary_tree_nodes(tree->left);
size_t right_nodes = binary_tree_nodes(tree->right);

return (1 + left_nodes + right_nodes);
}

return (0);
}
