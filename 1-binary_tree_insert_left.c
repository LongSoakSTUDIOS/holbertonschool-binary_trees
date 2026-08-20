#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left child
 * @parent: ptr to parent of node to create
 * @value: value to put in the new node
 * 
 * Return: ptr to new node, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		return (NULL);
		free(new_node);
	}
	if (parent->left != NULL)
	{
		tmp = parent->left;
		tmp->parent = new_node;
		new_node->left = tmp;
	}

	parent->left = new_node;
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	return (new_node);
}
