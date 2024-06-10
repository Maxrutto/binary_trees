#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child
 * @tree: Pointer to the root node of the tree
 *
 * Return: The number of nodes with at least 1 child
 * and 0 on NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		count++;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
