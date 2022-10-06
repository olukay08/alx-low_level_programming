#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned integer argument
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
		return (NULL);
	}

	return (s);
}
