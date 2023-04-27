#include "lists.h"

/**
 * add_node_end -  a function that adds a new node at
 * the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be duplicated abd added to the
 * list_t list.
 *
 * Return:  returns NULL if function fails, or
 * returns the address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *added_node;
	char *duplicated_string;
	int count;

	added_node = malloc(sizeof(list_t));
	if (added_node == NULL)
		return (NULL);

	duplicated_string = strdup(str);
	if (str == NULL)
	{
		free(added_node);
		return (NULL);
	}

	count =  strlen(str);

	added_node->str = duplicated_string;
	added_node->len = count;
	added_node->next = NULL;

	if (*head == NULL)
		*head = added_node;
	else
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = added_node;
	}

	return (added_node);
}
