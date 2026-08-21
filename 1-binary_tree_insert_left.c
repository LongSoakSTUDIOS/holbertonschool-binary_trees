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
		free(new_node);
		return (NULL);
	}
	if (parent->left != NULL)
	{
		tmp = parent->left;
		tmp->parent = new_node;
		parent->left = new_node;
		new_node->left = tmp;
	}
	else
	{
		parent->left = new_node;
		new_node->left = NULL;
	}

	new_node->parent = parent;
	new_node->right = NULL;
	new_node->n = value;
	

	return (new_node);
}
