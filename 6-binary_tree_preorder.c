#include "binary_trees.h"

/**
  * binary_tree_preorder - Goes throught a binary tree using preorder traversal
  * @tree: pointer to the root node of tree to traverse
  * @func: pointer to function to be called for each node
  *
  * Return: void
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
