#include "lists.h"

/**
 * add_node - a function that adds a new node at the
 * beginning of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be duplicated abd added to the
 * list_t list.
 *
 * Return:  returns NULL if function fails, or
 * returns the address of the newnode that is added.
 */

list_t *add_node(list_t **head, const char *str)
{
	int count;
	list_t *newnode;
	char *duplicated_copy;

	duplicated_copy = strdup(str);
	if (duplicated_copy == NULL)
		return (NULL);
	count = strlen(duplicated_copy);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
	free(duplicated_copy);
	return (NULL);
	}

	newnode->len = count;
	newnode->str = duplicated_copy;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
