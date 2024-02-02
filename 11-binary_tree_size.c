#include "binary_trees.h"
/**
 * binary_tree_size - function will return the size of a tree
 * @tree: measure tree
 * Return: size of tree is returned, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, pe = 0, pc = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		pe = binary_tree_size(tree->left);
		pc = binary_tree_size(tree->right);
		size = pe + pc + 1;
	}
	return (size);
}
