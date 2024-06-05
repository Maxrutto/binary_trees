#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: integer value to store in the new node
 *
 * Return: Returns a pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode, *old_node;

	tempNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;
	tempNode->parent = parent;

	if (parent->right != NULL)
	{
		old_node = parent->right;
		old_node->parent = tempNode;
		tempNode->right = old_node;
	}
	else
		tempNode->right = NULL;
	parent->right = tempNode;

	return (tempNode);
}
