#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: return 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_of_right;
	size_t height_of_left;

	if (tree == NULL)
	{
		return (0);
	}
	height_of_right = binary_tree_height(tree->right);
	height_of_left = binary_tree_height(tree->left);
	if (height_of_right > height_of_left)
	{
		return (height_of_right + 1);
	}
	return (height_of_left + 1);
}
