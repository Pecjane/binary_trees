#include "binary_trees.h"
/**
 * binary_tree_depth - Function to measure the depth of the binary
 * depth of specified node from root
 * @tree: to calculate the depth of the node
 * Return: 0 if tree is NULL or depth of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
