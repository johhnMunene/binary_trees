#include "binary_trees.h"
/**
 * binary_tree_is_leaf - a function to check if a node is a leaf
 * @node: the node to check if it is a leaf
 *
 * Return: return 1 if node is a leaf and 0 otherwise
 * if node is null, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->left == NULL && node->right == NULL);

}
