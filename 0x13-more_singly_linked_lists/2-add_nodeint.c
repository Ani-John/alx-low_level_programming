#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at
 * the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: the integer data in the list
 * Return:  returns NULL if function fails, or
 * returns the address of the head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (*head);
}
