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

	if (tree->left)
		return (1 + binary_tree_height(tree->left));
	else if (tree->right)
		return (1 + binary_tree_height(tree->right));
	else
		return (0);
}
