#include "binary_trees.h"

/**
 * binary_tree_height -  creates a binary tree node.
 * @tree: pointer to the parent node of the node to create
 * Return: return pointer to the new node, or NULL if failed
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_node = 0, left_node = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		right_node = 1 + binary_tree_height(tree->right);

	if (tree->left)
		left_node = 1 + binary_tree_height(tree->left);

	if (right_node > left_node)
		return (right_node);
	else
		return (left_node);
}
/**
 * binary_tree_balance -  creates a binary tree node.
 * @tree: pointer to the parent node of the node to create.
 * Return: return pointer to the new node, or NULL if failed
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right_node = 0, left_node = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		right_node = 1 + binary_tree_height(tree->right);
	if (tree->left)
		left_node = 1 + binary_tree_height(tree->left);
	return (left_node - right_node);
}

/**
 * binary_tree_is_perfect -  creates a binary tree node.
 * @tree: pointer to the parent node of the node to create.
 * Return: return pointer to the new node, or NULL it fails
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) == 0)
	{

		if (!tree->left && !tree->right)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
