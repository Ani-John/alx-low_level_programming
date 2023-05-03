#include "lists.h"
/**
 * print_listint -a function that prints all the elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("[%d]\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
