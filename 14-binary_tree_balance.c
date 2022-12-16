#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
		return (0);

	/* checks if it has any child */
	if (!tree->left && !tree->right)
		return (1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance
 * factor
 *
 * Return: The balance factor either +ve, -ve or 0
 * +ve if the height on the left > height on the right
 * -ve if the height on the left < height on the right
 *  0 if they are on the same level or tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
