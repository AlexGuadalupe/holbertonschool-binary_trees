#include "binary_trees.h"
/**
 * binary_tree_postorder- use post-order traversal
 * @tree: pointer to root node
 * @func: pointer to function call
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
