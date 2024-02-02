#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: return a pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_node;

	insert_node = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);
	if (insert_node == NULL)
		return (NULL);
	insert_node->parent = parent;
	insert_node->n = value;
	insert_node->left = NULL;
	insert_node->right = parent->right;
	if (parent->right)
	{
		parent->right->parent = insert_node;
	}
	parent->right = insert_node;
	return (insert_node);
}
