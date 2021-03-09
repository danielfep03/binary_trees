#include "binary_trees.h"

/**
 * binary_tree_node- Creates a binary tree node
 * @parent: Pointer to the parent
 * @value: Value to put into the node
 * Return: New node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	new_node->n = value;
	new_node->parent = parent;
	return (new_node);
}
