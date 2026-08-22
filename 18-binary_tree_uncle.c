#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_uncle - find uncle
 * @node: pointer to node
 *
 * Return: uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

    if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
    {
        return (NULL);
    }

    if (node->parent->parent->left == node->parent)
    {
        return (node->parent->parent->right);
    }
    else
        return (node->parent->parent->left);

    return (NULL);
}
