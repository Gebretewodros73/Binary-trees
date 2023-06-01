#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 *
 * @parent: parent node pointer
 * @value: value of  node
 *
 * Return: if new is null - NULL else - a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
