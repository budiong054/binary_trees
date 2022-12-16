#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}

/**
 * binary_tree_is_perfect_helper - helps to check if a binary tree is perfect
 * @tree: Pointer to the root node
 * @height: The height of the tree
 *
 * Return: 1 if it's perfect, 0 otherwise
 */
int binary_tree_is_perfect_helper(const binary_tree_t *tree, size_t height)
{
	size_t depth;

	if ((!tree->left && !tree->right))
	{
		depth = binary_tree_depth(tree);
		if (depth == height)
			return (1);
		else
			return (0);
	}

	if (!tree->left || !tree->right)
		return (0);

	return (binary_tree_is_perfect_helper(tree->left, height)
			&& binary_tree_is_perfect_helper(tree->right, height));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect or 0 if not perfect or tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	return (binary_tree_is_perfect_helper(tree, height));
}
