#include "lists.h"
#include <string.h>
/**
 *  _strlen - Returns the lenght of a string.
 *  @s: Type char pointer
 *  Return: Always 0.
 */
int _strlen(const char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}
/**
 * *add_node - Return the number of elements in a linked list
 *  @head: data type poointer of struct node
 *  @str: data type pointer of struct
 *  Return: elements of the str i
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

