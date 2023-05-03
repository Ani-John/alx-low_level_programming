#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked list_t list.
 * @h: The linked list_t list passed to the function.
 * Return: The number of elements in the linked
 * list passed o the function.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
