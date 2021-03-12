#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: The depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect - Veryfy if a tree is perfect
 * @d: Pointer to the node to measure the depth
  *@level: Level of the node
 * @root: Pointer to the binary tree
 * Return: true if the tree is perfect, false otherwise
 */
bool is_perfect(binary_tree_t *root, int d, int level)
{
	if (!root)
		return (true);

	if (!root->left && !root->right)
		return (d == level + 1);

	if (!root->left || !root->right)
		return (false);

	return (is_perfect(root->left, d, level + 1) &&
		is_perfect(root->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: a binary tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t d = binary_tree_depth(tree);

	return (is_perfect((binary_tree_t *)tree, d, 0));
}
