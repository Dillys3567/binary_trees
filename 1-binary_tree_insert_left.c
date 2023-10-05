#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a left child node
 * @parent: parent node
 * @value: node value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left = new;
	}
	else
		parent->left = new;
	return (new);
}
