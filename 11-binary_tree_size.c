#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: The size of the tree or 0 on NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_subtree, right_subtree, tree_size;

	if (tree == NULL)
		return (0);
	left_subtree = binary_tree_size(tree->left);
	right_subtree = binary_tree_size(tree->right);
	tree_size = left_subtree + right_subtree + 1;

	return (tree_size);
}
