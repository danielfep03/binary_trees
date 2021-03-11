#include "binary_trees.h"

/**
 * binary_tree_nodes -  Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the node to count the number of nodes
 * Return: Number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t childs = 0;

	if (!tree)
		return (0);
	childs = binary_tree_nodes(tree->left);
	childs += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (childs + 1);
	return (childs);
}
