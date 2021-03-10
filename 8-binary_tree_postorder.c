#include "binary_trees.h"

/**
 * binary_tree_postorder -Goes through a binary tree using post-order traversal
 * @tree: a binary tree
 * @func: pointer to a function to call for each node.
 * Return: None
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, *func);
	if (tree->right)
		binary_tree_postorder(tree->right, *func);
	func(tree->n);
}
