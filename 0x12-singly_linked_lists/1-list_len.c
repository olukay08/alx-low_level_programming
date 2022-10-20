#include "lists.h"
/**
 * list_len - prints -number of elements in a linked list_t list.
 * @h:pointer to list_t next node
 * Return:lenght of the lists
 */
size_t list_len(const list_t *h)
{
	int k = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		k++;
	}
	return (k);
}
