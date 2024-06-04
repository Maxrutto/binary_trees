#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Returns a pointer to the created node
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	tempNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	tempNode->parent = parent;
	tempNode->right = NULL;
	tempNode->left = NULL;

	if (parent->left != NULL)
	{
		tempNode->left = parent->left;
		parent->left->parent = tempNode;
		tempNode->n = value;
		parent->left = tempNode;
	}
	else
	{
		tempNode->n = value;
		parent->left = tempNode;
	}

	return (tempNode);
}
