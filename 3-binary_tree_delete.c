#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	/* delete the left child */
	binary_tree_delete(tree->left);

	/* delete the right child */
	binary_tree_delete(tree->right);

	free(tree);
}
