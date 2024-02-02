#include "binary_trees.h"

/**
 * binary_tree_is_root - This checks if a node is a root
 * @node: pointer  Node to check is this
 * Return: it returns 1 otherwise 0 
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
