#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a
 * binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: Returns the height of the tree, 0 on NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;

	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
