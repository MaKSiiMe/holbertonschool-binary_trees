#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node
 * @value: value of new node
 * Return: new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree = NULL;

	new_tree = malloc(sizeof(binary_tree_t));

	if (new_tree == NULL)
		return (NULL);

	new_tree->parent = parent;
	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;

	return (new_tree);
}
