#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	tempNode = binary_tree_node(parent, value);
	if (tempNode == NULL)
		return (NULL);
	tempNode->left = parent->left;
	parent->left = tempNode;
	if (tempNode->left)
		tempNode->left->parent = tempNode;
	return (tempNode);
}
