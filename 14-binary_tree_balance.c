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
	int height_left;
	int height_right;

	if (tree == NULL)
		return (-1);

	height_left = tree_height(tree->left);
	height_right = tree_height(tree->right);

	return (1 + (height_left > height_right ? height_left : height_right));
}

/**
 * binary_tree_balance - find nodes with at least 1 child
 * @tree: pointer to binary tree
 *
 * Return: size
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	return (tree_height(tree->left) - tree_height(tree->right));
}
