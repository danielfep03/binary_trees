#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent
 * @value: Value to put into the node
 * Return: New node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *left_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		left_node = parent->left;
		new_node->left = left_node;
		left_node->parent = new_node;
	}
	new_node->parent = parent;
	parent->left = new_node;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
