#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: height
 */

int binary_tree_height(const binary_tree_t *tree)
{
	size_t right_size, left_size = 0;

	if (!tree)
		return (0);

	right_size = binary_tree_height(tree->right);
	left_size = binary_tree_height(tree->left);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: size
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	perfect_size = (1 << height) - 1;

	return (size == perfect_size);
}
