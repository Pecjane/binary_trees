#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creating a binary tree node.
 * @parent: parent node of the node to create.
 * @value: value of the new node.
 * Return: new node NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *pec_node = malloc(sizeof(binary_tree_t));

	if (!pec_node)
		return (NULL);

	pec_node->parent = parent;
	pec_node->left = NULL;
	pec_node->right = NULL;
	pec_node->n = value;

	return (pec_node);
}
