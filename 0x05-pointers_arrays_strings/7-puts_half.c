#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - print half of the chrs of a string
 * @str: prameter
 * Return:nothing
 */
void puts_half(char *str)
{
	int g = strlen(str);
	int i;
	int h = g / 2;

	for (i = 0 ; i < g; i++)
	{
		if (i >= h)
		{
			if (g % 2 == 0)
			{

			printf("%c", str[i]);
			}
			else
			{
				printf("%c", str[(g - 1) / 2]);
			}
		}

	}
	printf("\n");

}
