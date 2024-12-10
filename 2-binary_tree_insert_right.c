#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_t - creates a binary tree node
 * @parent: pointer to the node to insert the right-child in
 * @value: value of new node
 * Return: new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_tree->left = NULL;
	new_tree->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new_node;
	
	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}
