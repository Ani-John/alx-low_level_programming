#include "lists.h"

/**
 * free_listint2 - a function that frees a free_listint list.
 * @head: pointer the list_t list to be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_address;

	while (*head)
	{
		current_address = (*head)->next;
		free(*head);
		*head = current_address;
	}
	head = NULL;
}
