#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to count the No of nodes
 * Return: count the number of nodes, if tree is NULL, it will return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes = 0;
	size_t right_nodes = 0;
	size_t node_count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		node_count += 1;
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	return (right_nodes + left_nodes + node_count);
}
