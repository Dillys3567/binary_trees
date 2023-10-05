#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse tree inorder
 * @tree: tree to be traversed
 * @func: function to be called on nodes
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
