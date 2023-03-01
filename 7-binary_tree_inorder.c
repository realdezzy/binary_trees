
#include "binary_trees.h"

/**
  * binary_tree_inorder - Goes throught a binary tree using inorder traversal
  * @tree: pointer to the root node of tree to traverse
  * @func: pointer to function to be called for each node
  *
  * Return: void
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
