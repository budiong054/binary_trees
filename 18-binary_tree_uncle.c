#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: The pointer to uncle node or NULL if
 * node is NULL or node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	parent = node->parent;
	grandparent = node->parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
