#include "binary_trees.h"

/**
 * binary_tree_insert_left - create tree
 * @parent: parent struct
 * @value: value at node
 * Return: node pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->right = NULL;

	if (parent->left != NULL)
		node->left = parent->left;
	else
		parent->left = node;

	return (node);
}
