#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return:  a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *noderight = NULL;

	if (parent == NULL)
		return (NULL);
	noderight = binary_tree_node(parent, value);
	if (noderight == NULL)
		return (NULL);
	if (parent->right)
	{
		parent->right->parent = noderight;
		noderight->right = parent->right;
	}
	parent->right = noderight;
	return (noderight);
}

