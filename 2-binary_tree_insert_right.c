#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	if (!parent)
		return (NULL);
	tempNode = binary_tree_node(parent, value);
	if (tempNode == NULL)
		return (NULL);
	tempNode->right = parent->right;
	parent->right = tempNode;
	if (tempNode->right)
		tempNode->right->parent = tempNode;
	return (tempNode);
}
