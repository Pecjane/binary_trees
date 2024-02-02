#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * If parent already has a left-child, the new node takes its place,
 * and the old left-child is set as the left-child of the new node.
 * @parent: parent  node to insert the left-child in
 * @value: store value in the new node.
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *pec_node;

	if (!parent)
		return (NULL);

	pec_node =  malloc(sizeof(binary_tree_t));

	if (!pec_node)
	{
		return (NULL);
	}

	pec_node->n = value;
	pec_node->parent = parent;
	pec_node->left = parent->left;
	pec_node->right = NULL;

	if (parent->left)
		parent->left->parent = pec_node;

	parent->left = pec_node;
	return (pec_node);
}
