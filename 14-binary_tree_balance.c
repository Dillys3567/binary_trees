#include "binary_trees.h"
/**
 * binary_tree_balance - measure balance factor
 * @tree: tree to measure balance factor
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height
				(tree->right));
	}
	return (0);
}
/**
 * binary_tree_height - find height of binary tree
 * @tree: tree to find height
 * Return: tree height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((1 > r) ? l : r);
	}
	return (0);
}
