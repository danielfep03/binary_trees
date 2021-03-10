#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: Pointer to the parent
 * @value: Value to put into the node
 * Return: New node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = new_node;
		new_node->left = parent->right;
	}
	new_node->parent = parent;
	parent->right = new_node;
	new_node->left = NULL;
	new_node->n = value;

	return (new_node);
}
