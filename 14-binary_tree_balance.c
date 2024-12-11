#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: height
 */

int binary_tree_height(const binary_tree_t *tree)
{
	size_t right_size = 0;
	size_t left_size = 0;

	if (tree == NULL)
		return (0);

	right_size = binary_tree_height(tree->right);
	left_size = binary_tree_height(tree->left);

	if (left_size > right_size)
		return (left_size + 1);
	else
		return (right_size + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
