#include "binary_trees.h"

/**
 * binary tree_postorder -Goes through a binary tree using post-order traversal
 * @tree: a binary tree
 * @func: pointer to a function to call for each node.
 * Return: None
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
{
	if (tree->left)
		binary_tree_inorder(tree->left, *func);
	if (tree->right)
		binary_tree_inorder(tree->right, *func);
	func(tree->n);
}
