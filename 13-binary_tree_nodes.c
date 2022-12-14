#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to the
 * count the number of nodes
 *
 * Return: The number of nodes or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* check if the tree is NULL or it's has no child */
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_nodes(tree->left) + 1
			+ binary_tree_nodes(tree->right));
}
