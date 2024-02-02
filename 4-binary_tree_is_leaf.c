#include "binary_trees.h"

/**
 * binary_tree_is_leaf  - this is to  checks if a node is a leaf.
 * @node: this is  a pointer to the node to check.
 * Return: 1 if node is a leaf, or 0 if it is not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	return (0);
}
