#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: A binary tree
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	leaves = binary_tree_leaves(tree->left);
	if (!tree->right && !tree->left)
		return (leaves + 1);
	leaves += binary_tree_leaves(tree->right);
	if (!tree->right && !tree->left)
		return (leaves + 1);
	return (leaves);
}