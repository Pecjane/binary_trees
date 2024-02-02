#include "binary_trees.h"

/**
 * binary_tree_delete - it deletes the whole binary tree.
 * @tree: a pointer to the root node of the tree to delete.
 * Return: it does nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	tree->parent = NULL;
	tree->left = NULL;
	tree->right = NULL;
	free(tree);
	tree = NULL;
}
