#include "binary_trees.h"
/**
 * binary_tree_depth - func. that measure the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth.
 * Return: the value of the pointer.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t check_depth = 0;

	if (!tree)/*if there is no tree (tree == NULL)*/
		return (0);
	for (; tree->parent != NULL; tree = tree->parent)
	{
		check_depth++;
	}
	return (check_depth);
}
