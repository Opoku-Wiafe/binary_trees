#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: return 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	size_t height_of_left = binary_tree_height(tree->left);
	size_t height_of_right = binary_tree_height(tree->right);

	return ((height_of_left > height_of_right ? height_of_left : height_of_right) + 1);
}