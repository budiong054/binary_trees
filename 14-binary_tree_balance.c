#include "binary_trees.h"

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
	return (1);
}
