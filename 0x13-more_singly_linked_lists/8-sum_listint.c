#include "lists.h"

/**
 * sum_listint -  a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 *
 * @head: a pointer to the head of the list
 *
 * Return: returns the sum of all the data (n) of a
 * listint_t linked list; if the list is empty,
 * return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next
	}
	return (sum);
}
