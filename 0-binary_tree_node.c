#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Crea un nodo de árbol binario.
 * @parent: Puntero al nodo padre.
 * @value: Valor a almacenar en el nuevo nodo.
 *
 * Return: Puntero al nuevo nodo creado.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));

    if (node == NULL)
        return (NULL);

    node->n = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

