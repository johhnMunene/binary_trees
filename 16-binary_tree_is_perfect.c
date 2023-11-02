#include "binary_trees.h"

/**
* binary_tree_height - Calculate the height of a binary tree.
*
* @tree: Pointer to the root of the binary tree.
* Return: Height of the tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (!tree)
return (0);

size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);

return (left_height > right_height ? left_height + 1 : right_height + 1);
}

/**
* binary_tree_is_full - Test if a binary tree is full.
*
* @tree: Pointer to the root of the binary tree.
* Return: 1 if full, 0 otherwise.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);

if (!tree->left && !tree->right)
return (1);

if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

return (0);
}

/**
* binary_tree_is_perfect - Check if a binary tree is perfect.
*
* @tree: Pointer to the root of the binary tree.
* Return: 1 if perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
return (0);

int left_height = binary_tree_height(tree->left);
int right_height = binary_tree_height(tree->right);

if (left_height == right_height)
return (binary_tree_is_full(tree));

return (0);
}
