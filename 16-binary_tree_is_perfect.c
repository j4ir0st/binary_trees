#include "binary_trees.h"
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to traverse
 * Return: height of the tree}
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

/**
 * pow_recursion - x raised to the power of y
 * @x: base
 * @y: exponente
 * Return: potencia
 */

int pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * pow_recursion(x, (y - 1)));
}

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: tree to traverse
 * Return: count of the leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
        size_t left = 0, right = 0;

        if (tree == NULL)
                return (0);
        if (tree->left == NULL && tree->right == NULL)
                return (1);
        left = binary_tree_leaves(tree->left);
        right = binary_tree_leaves(tree->right);
        return (left + right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to traverse
 * Return: 1 if its perfect, or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0, leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);
	return (pow_recursion(2, height) == leaves);
}
