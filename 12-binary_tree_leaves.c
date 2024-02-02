#include "binary_trees.h"
/**
 * binary_tree_leaves - This function will
 * returns the number of leaves in a tree
 * @tree: tree to measure
 * Return: number of leaves is returned, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leav = 0, pt = 0, pr = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		pt = binary_tree_leaves(tree->left);
		pr = binary_tree_leaves(tree->right);
		leav = pt + pr;
		return ((!pt && !pr) ? leav + 1 : leav + 0);
	}
}
