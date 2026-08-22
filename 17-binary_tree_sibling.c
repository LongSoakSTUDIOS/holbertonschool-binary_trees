#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_sibling - find sibling
 * @node: pointer to binary tree
 *
 * Return: sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
    {
        return (NULL);
    }

    if (node->parent->left == NULL || node->parent->right == NULL)
    {
        return (NULL);
    }

    if (node->parent->right == node)
    {
        return (node->parent->left);
    }
    else
    {
        return (node->parent->right);
    }

    return (NULL);
}
