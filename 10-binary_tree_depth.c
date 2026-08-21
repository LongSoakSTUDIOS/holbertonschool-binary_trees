#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - find the depth of node
 * @tree: pointer to binary tree
 *
 * Return: height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (-1);
	}

	left_height = binary_tree_depth(tree->parent);
	right_height = binary_tree_depth(tree->parent);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
