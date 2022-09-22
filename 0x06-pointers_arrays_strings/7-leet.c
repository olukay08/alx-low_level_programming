#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *leet -function t encode a string
 * @g:parameter
 * Return:chrs
 */
char *leet(char *g)
{
	int k = 0;
	int u = strlen(g);

	while (k < u)
	{
		if (g[k] == 'a' || g[k] == 'A')
		{
			g[k] = 52;
		}
		else if (g[k] == 'e' || g[k] == 'E')
		{
			g[k] = 51;
		}
		else if (g[k] == 'o' || g[k] == 'O')
		{
			g[k] = 48;
		}
		else if (g[k] == 't' || g[k] == 'T')
		{
			g[k] = 55;
		}
		else if (g[k] == 'l' || g[k] == 'L')
		{
			g[k] = 49;
		}
		else
		{
			g[k] = g[k];
		}
		k++;
	}
	return (g);
}

