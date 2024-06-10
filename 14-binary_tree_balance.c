#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The balance factor of the tree or 0 on NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left_height, right_height;

	left_height = _height(tree->left);
	right_height = _height(tree->right);

	return (left_height - right_height);
}
