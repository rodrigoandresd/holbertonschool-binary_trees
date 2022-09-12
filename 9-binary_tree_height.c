#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to to measure the height.
 * Return: height, if tree is NULL, it will return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t right_side = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	if (left_side >= right_side)
		return (left_side + 1);
	return (right_side + 1);

}
