#include "binary_trees.h"
/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 * Return: size_t representing height, 0 on failure or NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	left_size = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_size = tree->right ? 1 + binary_tree_height(tree->right) : 0;


	return (left_size > right_size ? left_size : right_size);
}
