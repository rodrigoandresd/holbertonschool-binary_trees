#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to to measure the size.
 * Return: leaves, if tree is NULL, it will return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf = 0;
	size_t right_leaf = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);
	return (right_leaf + left_leaf);
}
