#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent of the node created
 * @value: The value added to the node
 *
 * Return: The binary tree node created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	tempNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
		return (NULL);
	tempNode->parent = parent;
	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;

	return (tempNode);
}
