#include "binary_trees.h"
#define MAX(a,b) (((a)>(b))?(a):(b))

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to traverse
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (MAX(left, right) + 1);
}
