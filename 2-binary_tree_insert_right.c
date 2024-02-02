#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the new node
 * Return: NULL if it fails or the new node is returned
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *pec_node;

	if (!parent)
		return (NULL);

	pec_node = malloc(sizeof(binary_tree_t));

	if (!pec_node)
		return (NULL);

	pec_node->n = value;
	pec_node->parent = parent;
	pec_node->left = NULL;
	pec_node->right = parent->right;

	if (pec_node->right)
		pec_node->right->parent = pec_node;

	parent->right = pec_node;

	return (pec_node);
}
