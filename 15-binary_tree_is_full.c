#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: return the balance of the binary tree.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int checker = 1;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->right && tree->left) || (!tree->right && !tree->left))
	{
		checker *= 1;
	}
	else
	{
		checker *= 0;
	}

	if (tree->right)
	{
		checker *= binary_tree_is_full(tree->right);
	}

	if (tree->left)
	{
		checker *= binary_tree_is_full(tree->left);
	}

	return (checker);
}
