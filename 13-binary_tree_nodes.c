#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The number of nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)

	{
		return (0);
	}
	size_t left_count = binary_tree_nodes(tree->left);
	size_t right_count = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
	{
		return (left_count + right_count + 1);
	}
	else
	{
		return (left_count + right_count);
	}
}
