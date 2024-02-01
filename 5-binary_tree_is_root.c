#include "binary_trees.h"
/**
 * binary_tree_is_root - func. that checks if a given node is a root
 * @node: pointer to the node to be checked
 * Return: return 1 if its root otherwise 0;
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}