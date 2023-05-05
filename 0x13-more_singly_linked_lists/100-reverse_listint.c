#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: A pointer to the list to be reversed.
 *
 * Return: A pointer to new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *ptr;

	if (*head == NULL)
		return (NULL);

	while ((*(*head)).next != NULL)
	{
		ptr = (*(*head)).next;
		(*(*head)).next = p;
		p = *head;
		*head = ptr;
	}

	(*(*head)).next = p;

	return (*head);
}
