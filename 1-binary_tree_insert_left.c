#include "binary_trees.h"
/**
 *binary_tree_insert_left - insert a node
 *@parent: a pointer to the node
 *@value: the value to store in the new node
 *
 *Return: if the parent is NULL or an error occurs
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
