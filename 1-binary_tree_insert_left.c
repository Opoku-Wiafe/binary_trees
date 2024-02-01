#include "binary_trees.h"
/**
 * binary_tree_insert_left - func.inserts a node as the left-child of another
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: return a pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_node;
	insert_node = malloc(sizeof(binary_tree_t));
	if (parent == NULL)
		return (NULL);
	if (insert_node == NULL)
		return (NULL);
	insert_node->n = value;
	insert_node->left = NULL;
	insert_node->right = NULL;
	if (parent->left != NULL)
	{
		insert_node->left = parent->left;
	}
	parent->left = insert_node;
	return (insert_node);
}