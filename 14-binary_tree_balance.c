#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>


/**
 * tree_height - find tree height
 * @tree: pointer to binary tree
 *
 * Return: balance
 */
int tree_height(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
		height_left = 1 + (tree_height(tree->left));

	if (tree->right)
		height_right = 1 + (tree_height(tree->right));

	return (height_left - height_right);
}

/**
 * binary_tree_balance - find nodes with at least 1 child
 * @tree: pointer to binary tree
 *
 * Return: size
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
	{
		return (0);
	}

	balance = tree_height(tree);

	return (balance);
}
