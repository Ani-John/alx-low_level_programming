#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: the index of the node, starting at 0
 *
 * Return:  NULL If the node does not exist or returns the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head unsigned int index)
{
	listint_t *ptr;
	int i, len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	    
	if n >= len
		return (NULL);
	    
	ptr = head;
	    
	for (i = 0, i < index, i++)
		ptr++;
	    
	return (*ptr)
}
