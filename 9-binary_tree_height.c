#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* checks if it has any child */
	if (!tree->left && !tree->right)
		return (0);

	if (tree->left)
		return (1 + binary_tree_height(tree->left));
	else
		return (1 + binary_tree_height(tree->right));
}
