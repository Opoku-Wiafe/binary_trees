#include "binary_trees.h"
/**
 * binary_tree_sibling -  creates a binary tree node.
 *
 * @node: pointer to the parent node of the node to create.
 * Return: pointer to the new node, or NULL if fails
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->left || !node->parent->right)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}