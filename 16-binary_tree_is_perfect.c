#include "binary_trees.h"

/**
* binary_tree_is_full - This function tests if a binary tree is a perfect binary tree
*
* @tree: A pointer to the root of the binary tree
* Return: 1 if the tree is full, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return(binary_tree_is_perfect(tree->right) && (binary_tree_is_perfect(tree->right)));
	return (0);
}