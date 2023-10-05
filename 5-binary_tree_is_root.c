#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a node is a root
 * @node: node to be checked
 * Return: 1 if a root and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	else
		return (0);
}
