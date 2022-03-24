#include "binary_trees.h"
/*#define MAX(a, b) (((a) > (b)) ? (a) : (b))*/

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: tree to traverse
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
