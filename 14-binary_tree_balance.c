#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_balance - find nodes with at least 1 child
 * @tree: pointer to binary tree
 *
 * Return: size
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
	int height_left = 0;
	int height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
		height_left = 1 + (binary_tree_balance(tree->left));

	if (tree->right)
		height_right = 1 + (binary_tree_balance(tree->right));

	balance = height_left - height_right;

	return (balance);
}
