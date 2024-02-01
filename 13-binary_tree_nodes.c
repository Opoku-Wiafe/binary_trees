#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count nodes.
 * Return: the number of nodes with child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_counter = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->right || tree->left)
	{
		node_counter += 1;
	}
	node_counter += binary_tree_nodes(tree->right);
	node_counter += binary_tree_nodes(tree->left);
	return (node_counter);
}
