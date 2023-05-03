#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at
 * the end of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @n: the int data of the list
 *
 * Return:  returns NULL if function fails, or
 * returns the address of the head.
 */
listint_t *add_nodeint_end(listint_t **head, const
		int n)
{
	listint_t *end_node, *added_node;

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	if (*head == NULL)
		*head = added_node;
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = added_node;
	}

	return (added_node);
}
