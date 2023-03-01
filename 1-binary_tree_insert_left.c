#include "binary_trees.h"

/**
  * binary_tree_insert_left - a function that inserts a node as
  * the left-child of another node
  * @parent: is a pointer to the node to insert the left-child in
  * @value: is the value to store in the new node
  *
  * Return: binary_tree_t or NULL
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->right = NULL;
	new_node->n = value;

	if (parent->left)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
		parent->left = new_node;
	}
	else
	{
		new_node->left = NULL;
		parent->left = new_node;
	}

	return (new_node);
}

