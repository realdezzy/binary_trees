#include "binary_tree.h"

/**
  * binary_tree_sibling - Finds the sibling of a node
  * @node: a pointer to the node to find sibling
  *
  * Return: Pointer to sibling or NULL
  */
binary_tree_t binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
