#include "binary_trees.h"

/**
  * binary_tree_nodes - function that counts the nodes in a binary tree
  * @tree: a pointer to the root node of the tree
  *
  * Return: Number of leaf nodes or 0
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		nodes += 1;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
