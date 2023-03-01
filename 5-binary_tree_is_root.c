#include "binary_trees.h"

/**
  * binary_tree_is_root - a function that checks if a node is a root
  * @node: node to test if root
  *
  * Return: 1 or 0
  */

int binary_tree_is_root(const binary_tree_t *node)
{
	int ret = 0;
	if (!node)
		return (0);
	ret = node->parent ? 0 : 1;
	return (ret);
}
