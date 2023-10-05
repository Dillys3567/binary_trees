#include "binary_trees.h"
/**
 * binary_tree_sibling - find sibling of node in tree
 * @node: pointer to node to find sibling
 * Return: NULL if node is null or has no sibling else node pointer
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
