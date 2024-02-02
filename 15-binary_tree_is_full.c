#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: return the balance of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_of_left, height_of_right;

	if (tree == NULL)
		return (0);
	height_of_left = binary_tree_balance(tree->left);
	height_of_right = binary_tree_balance(tree->right);
	return (height_of_left - height_of_right);
}
