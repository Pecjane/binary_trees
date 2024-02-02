#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the node
 * returns # of nodes in a tree with children
 * @tree: tree to check is this
 * Return: number of nodes,0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  node_p = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node_p += ((tree->left || tree->right) ? 1 : 0);
		node_p += binary_tree_nodes(tree->left);
		node_p += binary_tree_nodes(tree->right);
		return (node_p);
	}
}
