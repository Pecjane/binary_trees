#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height,0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ht_pec1 = 0;
	size_t ht_pec2 = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			ht_pec1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			ht_pec2 = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((ht_pec1 > ht_pec2) ? ht_pec1 : ht_pec2);
	}
}
