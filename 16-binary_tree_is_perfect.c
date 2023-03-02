#include <math.h>
#include "binary_trees.h"

/**
  * binary_tree_is_perfect - Checks if the binary tree is perfect
  * @tree: a pointer to the root node of the tree to check
  *
  * Return: 1 or 0
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, leaves = 0;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);

	if ((int) leaves == (1 << height))
		return (1);
	else
		return (0);
	return (0);
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

	left_size = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_size = tree->right ? 1 + binary_tree_height(tree->right) : 0;


	return (left_size > right_size ? left_size : right_size);
}


/**
  * binary_tree_leaves - function that counts the leaves in a binary tree
  * @tree: a pointer to the root node of the tree
  *
  * Return: Number of leaf nodes or 0
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		leaves += 1;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}

