#include "binary_trees.h"

/**
* binary_tree_ancestor - unction that finds the lowest common ancestor of two nodes
* @first: the first node to check
* @second: the second node to check
* Return: the lowest common ancestor of two nodes
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
if (first == NULL || second == NULL)
{
return NULL;
}

const binary_tree_t *temp1 = first;
const binary_tree_t *temp2 = second;

while (temp1 != temp2)
{
if (temp1 == NULL || temp2 == NULL)
{
return NULL;
}

temp1 = temp1->parent;
temp2 = temp2->parent;
}

return (binary_tree_t *)temp1;
}
