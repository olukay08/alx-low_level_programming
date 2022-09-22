#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *cap_string - function to capitalize each word in a string
 * @g:parameter
 * Return:chars
 */
char *cap_string(char *g)
{
	int k = strlen(g);
	int i = 0;
	char a[] = " \t\n,;.!?\"(){}";
	int r;

	while (i < k)
	{
		for (r = 0 ; r <= strlen(a); r++)
		{
			if (i == 0 || g[i - 1] == a[r])
			{
				g[i] = toupper(g[i]);
			}
		}
		i++;
	}
	return (g);
}
