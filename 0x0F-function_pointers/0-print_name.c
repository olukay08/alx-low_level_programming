#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Function that prints a name
 * @name: Type char string pointer
 * @f: Type pointer func & char is arg
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
