#include "binary_trees.h"

/**
 * binary_tree_is_leaf - is node is apart of tree
 * @node: test node
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
