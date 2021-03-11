#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: The depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *node = NULL;
	size_t depth = 0;

	if (!tree)
		return (0);
	node = (binary_tree_t *)tree;
	while (node->parent)
	{
		depth++;
		node = node->parent;
	}
	return (depth);
}
