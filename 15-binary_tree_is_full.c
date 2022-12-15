#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 if not full or tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* check if tree is null */
	if (!tree)
		return (0);

	/* check if the node has no child */
	if (!tree->left && !tree->right)
		return (1);

	/* check if the node has exactly two child */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));

	return (0);
}
