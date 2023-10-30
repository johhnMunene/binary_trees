#include "binary_trees.h"


/**
 * binary_tree_insert_left - function
 * @parent: the parent node
 * @value: the value to insert
 *
 * Return: a pointer to the inserted node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_element;

	if (parent == NULL)
		return (NULL);
	new_element = malloc(sizeof(binary_tree_t));

	if (new_element == NULL)
		return (NULL);
	new_element->n = value;
	new_element->parent = parent;
	new_element->right = NULL;
	new_element->left = parent->left;
	parent->left = new_element;
	if (new_element->left)
		new_element->left->parent = new_element;
	return (new_element);
}
