#include "binary_trees.h"
/**
 * is_full_recursive - check recursively if tree is full
 * @tree: tree to check
 * Return: 0 if not full and 1 otherwise
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && !tree->right) || (!tree->left && tree->right)
				|| is_full_recursive(tree->left) == 0
				|| is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}
/**
 * binary_tree_is_full - check if tree is full
 * @tree: tree to check
 * Return: 0 if NULL or not full and 1 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_full_recursive(tree));
}
