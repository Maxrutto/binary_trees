#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a
 * binary_tree
 * @tree: pointer to the root of the tree
 *
 * Return: Returns the number of leaves, or 0 on NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	i = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (i);
}
