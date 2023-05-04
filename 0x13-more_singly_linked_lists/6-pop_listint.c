#include "lists.h"

/**
 * pop_listint - a function that deletes the head
 * node of a listint_t linked list, and returns the
 * head node’s data (n).
 * @head: a pointer to a pointer to the list.
 *
 * Return: The head node's data (n), or 0 when the
 * list is an empty list
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *current_value;

	if (*head == NULL)
		return (0);

	num = (*head)->n;

	current_value = *head;

	*head = (*head)->next;

	free(current_value);

	return (num);
}
