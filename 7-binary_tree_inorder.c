#include "binary_trees.h"
/**
 * binary_tree_inorder -  binary tree using in-order traversal
 * tree using in-order traversal
 * @tree: to measure a tree
 * @func: function to use is this
 * Return: returned nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
