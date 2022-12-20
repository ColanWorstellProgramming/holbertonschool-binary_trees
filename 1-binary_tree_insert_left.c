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

	if (parent == NULL)


	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
