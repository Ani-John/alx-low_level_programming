#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a given node of
 * a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list
 * @index: the index of the node, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *p, *next_node;
	unsigned int i, len = 0;

	if (*head == NULL)
		return (-1);

	p = *head;
	while (p)
	{
		len++;
		p = p->next;
	}

	if (index > (len - 1))
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
		ptr = ptr->next;
	next_node = ptr->next->next;
	free(ptr->next);
	ptr->next = next_node;



	return (1);
}
