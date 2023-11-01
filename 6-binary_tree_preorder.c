#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that traverses the binary tree in
 * a preorder manner
 * @tree: the root node
 * @func: a function pointer
 *
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
