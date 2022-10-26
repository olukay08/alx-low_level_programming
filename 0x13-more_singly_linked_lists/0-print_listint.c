#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 *@h:data type pointer of struct
 * Return:the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%i\n", ptr->n);
			i++;
			ptr = ptr->next;
	}
	return (i);
}
