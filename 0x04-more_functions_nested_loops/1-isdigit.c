#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function that checks for digits 0 -9
 * @c:Argument for the function
 * Return: Always 1 for true and 0 for false
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);

}
