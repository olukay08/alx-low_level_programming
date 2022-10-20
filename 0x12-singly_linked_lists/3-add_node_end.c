#include "lists.h"
#include <string.h>

/**
 * *add_node_end - add node to the end of the linked list
 * @head: pointer of the head
 * @str:string to be added as data
 * Return:NEW node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int i, k = 0;
	list_t *last = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		k++;
	}
	new_node->str = strdup(str);
	new_node->len = k;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}


