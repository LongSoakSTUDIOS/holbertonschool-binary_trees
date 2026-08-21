#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - find nodes with at least 1 child
 * @tree: pointer to binary tree
 *
 * Return: size
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		count++;

	return (count);
}
