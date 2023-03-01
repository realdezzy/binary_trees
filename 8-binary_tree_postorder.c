#include "binary_trees.h"

/**
  * binary_tree_postorder - Goes through a binary tree
  * using postorder traversal
  * @tree: pointer to the root node of tree to traverse
  * @func: pointer to function to be called for each node
  *
  * Return: void
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
