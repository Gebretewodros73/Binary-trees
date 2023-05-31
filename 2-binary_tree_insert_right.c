#include "binary_trees.h"
/**
 * binary_tree_insert_right: right child node insertion
 *
 * @parent: pointer to the node
 * @value: value to store
 *
 * Return: if fail NULL -else- insert node to right
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if(parent == NULL)
		return(NULL);

	new = binary_tree_node(parent, value);

	if(new == NULL)
		return(NULL);

	if(parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return(new);
}
