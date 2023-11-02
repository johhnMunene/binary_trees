#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The number of nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)

	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
