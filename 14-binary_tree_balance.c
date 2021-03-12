#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: a binary tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lh = 0;
	size_t rh = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lh = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		rh = 1 + binary_tree_balance(tree->right);

	return (lh - rh);
}
