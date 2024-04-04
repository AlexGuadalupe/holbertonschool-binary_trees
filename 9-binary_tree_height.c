#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree:pointer to the root node, to measure height
 *
 * Return: height of the binary tree, if NULL 0
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight, rightheight;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);

	if (leftheight > rightheight)
		return (leftheight + 1);

	else
		return (rightheight + 1);
}
