#include "binary_trees.h"

/**
 * Binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return:  a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodeleft = NULL;

	nodeleft = binary_tree_node(parent, value);
	if (nodeleft == NULL)
		return (NULL);
	if (parent->left)
	{
		parent->left->parent = nodeleft;
		nodeleft->left = parent->left;
	}
	parent->left = nodeleft;
	return (nodeleft);
}
