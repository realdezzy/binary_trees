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
	int balance_l;
	int balance_r;

	balance_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	balance_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (balance_l - balance_r);
}
