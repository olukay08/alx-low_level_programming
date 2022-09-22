#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
* *string_toupper - change string to upper
*@g:parameter
*Return:char
*/
char *string_toupper(char *g)
{
	int i = 0;

	while (g[i])
	{
		putchar(toupper(g[i]));
		i++;
	}
	return (g);
}




