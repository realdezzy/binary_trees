#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance of a binary tree
 *
 * @tree: Pointer to the node to measures the balance
 *
 * Return: The balance of the tree starting at node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t balance_l = 0;
	size_t balance_r = 0;

	balance_l += binary_tree_height(tree->left);
	balance_r += binary_tree_height(tree->right);
	return ((int) balance_l - (int) balance_r);
}

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

	left_size += 1 + binary_tree_height(tree->left);
	right_size += 1 + binary_tree_height(tree->right);
	if (left_size > right_size)
		return (left_size);

	return (right_size);
}
