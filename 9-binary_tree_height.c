#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - find the height
 * @tree: pointer to binary tree
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
		height_left = 1 + (binary_tree_height(tree->left));

	if (tree->right)
		height_right = 1 + (binary_tree_height(tree->right));

	if (height_left > height_right)
	{
		return (height_left);
	}
	if (height_right > height_left)
	{
		return (height_right);
	}
	else
		return (height_left);

	return (0);

}
