#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	/* check if the parent node is NULL */
	if (!node->parent)
		return (1);
	else
		return (0);
}
