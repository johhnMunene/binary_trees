#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that traverses the binary tree in
 * a inorder- manner
 * @tree: the root node
 * @func: a function pointer
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
