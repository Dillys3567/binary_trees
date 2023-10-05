#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse a tree using preodrer
 * @tree: tree to traverse
 * @func: pointer to fnction to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
