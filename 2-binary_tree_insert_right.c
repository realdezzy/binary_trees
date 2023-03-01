
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child
 * @parent: a pointer to the parent node
 * @value: the value to store in the node
 *
 * Return: a pointer to the newly created node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->right = parent->right;
	if (parent->right)
		parent->right->parent = new_node;
	new_node->parent = parent;
	parent->right = new_node;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
