#include <stdio.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h:data type pointer of struct
 * Return:the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			ptr = ptr->next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
			i++;
		}
	}
	return (i);
}
