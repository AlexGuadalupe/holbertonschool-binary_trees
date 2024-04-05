#include <stdlib.h>
#include <stdio.h>

struct binary_tree_s
{
    int n;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

/* Prototipo de la función auxiliar para imprimir el valor del nodo */
void print_node(int value);

/* Definición de la función binary_tree_levelorder */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Verifica si el árbol o la función son NULL */
    if (tree == NULL || func == NULL)
        return;

    /* Declaración e inicialización de la cola (queue) */
    binary_tree_t **queue = malloc(sizeof(binary_tree_t *));
    if (queue == NULL)
        return;
    int front = 0, rear = -1;

    /* Agrega el nodo raíz a la cola */
    queue[++rear] = (binary_tree_t *)tree;

    /* Realiza el recorrido por niveles */
    while (front <= rear)
    {
        /* Toma el nodo actual de la cola */
        binary_tree_t *current = queue[front++];

        /* Ejecuta la función con el valor del nodo */
        func(current->n);

        /* Si el nodo tiene hijo izquierdo, agrégalo a la cola */
        if (current->left != NULL)
            queue[++rear] = current->left;

        /* Si el nodo tiene hijo derecho, agrégalo a la cola */
        if (current->right != NULL)
            queue[++rear] = current->right;
    }

    /* Libera la memoria de la cola */
    free(queue);
}

/* Implementación de la función auxiliar para imprimir el valor del nodo */
void print_node(int value)
{
    printf("%d ", value);
}

/* Ejemplo de uso */
int main()
{
    /* Crear un árbol binario */
    binary_tree_t *root = malloc(sizeof(binary_tree_t));
    root->n = 1;
    root->left = malloc(sizeof(binary_tree_t));
    root->left->n = 2;
    root->right = malloc(sizeof(binary_tree_t));
    root->right->n = 3;
    root->left->left = NULL;
    root->left->right = NULL;
    root->right->left = NULL;
    root->right->right = NULL;

    /* Llamada a la función binary_tree_levelorder */
    printf("Recorrido por niveles: ");
    binary_tree_levelorder(root, &print_node);
    printf("\n");

    /* Liberar la memoria */
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
