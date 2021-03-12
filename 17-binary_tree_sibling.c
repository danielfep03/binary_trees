#include "binary_trees.h"

/**
 * binary_tree_sibling -  Finds the sibling of a node
 * @node:  Pointer to the node to find the sibling
 * Return: Pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}

	if (node->parent->left->n == node->n || node->parent->right->n == node->n)
	{
		if (node->parent->left->n == node->n)
		{
			return (node->parent->right);
		}
		else if (node->parent->right->n == node->n)
		{
			return (node->parent->left);
		}
	}
	return (NULL);
}
