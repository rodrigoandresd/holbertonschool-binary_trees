#include "binary_trees.h"

int _depth(const binary_tree_t *node);
bool is_perfect(const binary_tree_t *tree, int d, int level);



/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to to check
 * Return: 1 if it's perfect, if tree is NULL, it will return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = _depth(tree);
	if (is_perfect(tree, depth, 0))
		return (1);
	return (0);
}

/**
 * is_perfect - verify if a tree is perfect
 * @tree: binary tree pointer
 * @d: int input
 * @level: int input
 * Return: true if is perfect, false otherwise
 */

bool is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (false);
	if (tree->left == NULL && tree->right == NULL)
		if (d == level + 1)
			return (true);

	if (tree->left == NULL || tree->right == NULL)
		return (false);

	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}


/**
 * _depth - calculate depth of tree
 * @node: binary tree pointer
 * Return: depth of tree
 */
int _depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}