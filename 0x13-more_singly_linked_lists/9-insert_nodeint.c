#include "lists.h"

/**
 * insert_nodeint_at_index - Locates a given node of
 * a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list
 * @idx: the index of the node, starting at 0
 * @n: the int data of the new node
 *
 * Return:  The address of the new node, or NULL if
 * it failed. if it is not possible to add the new
 * node at index idx, return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *p, *current_node;
	unsigned int i, len = 0;

	p = *head;
	while (p)
	{
		len++;
		p = p->next;
	}

	if (idx >= len)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = (*head)->next;
		(*head)->next = ptr;
	}
	current_node = *head;
	for (i = 0; i < idx; i++)
		current_node = current_node->next;
	ptr->next = current_node->next;
	current_node->next = ptr;

	return (ptr);
}
