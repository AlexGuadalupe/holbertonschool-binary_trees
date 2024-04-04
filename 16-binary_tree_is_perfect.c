#include "binary_trees.h"
/**
 * binary_tree_h- measures height
 * @tree: pointer to root node
 * Return: height
 */
size_t binary_tree_h(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_h(tree->left);
	right_h = binary_tree_h(tree->right);

	return (((left_h > right_h) ? left_h : right_h) + 1);
}
/**
 * binary_tree_s- measures size
 * @tree: pointer to root node
 * Return: size
 */
size_t binary_tree_s(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_s(tree->left) + 1 + binary_tree_s(tree->right));
}
/**
 * binary_tree_is_perfect- checks if is perfect
 * @tree: pointer to root node
 * Return: 1 if is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, s, max_s;

	if (tree == NULL)
		return (0);

	h = binary_tree_h(tree);
	s = binary_tree_s(tree);

	max_s = (1 << h) - 1;

	return (s == max_s);
}
