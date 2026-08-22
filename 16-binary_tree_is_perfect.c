#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>


int isPerf(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (depth == level + 1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (isPerf(tree->left, depth, level + 1) && isPerf(tree->right, depth, level + 1));
}

int find_depth_left(const binary_tree_t *tree)
{
	if(tree == NULL)
	{
		return (0);
	}

	return (1 + find_depth_left(tree->left));
}

/**
 * binary_tree_is_full - find if tree is full
 * @tree: pointer to binary tree
 *
 * Return: balance
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;
	int level = 0;
	if (tree == NULL)
	{
		return (0);
	}
	depth = find_depth_left(tree);
	return (isPerf(tree, depth, level));



}
