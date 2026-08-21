#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - checks if node is a root
 * @node: ptr binary tree
 *
 * Return: 1 if leaf, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	if (node->left != NULL && node->right != NULL)
	{
		return (1);
	}

	return (0);
}
