#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints other chars
 * @str:parameter
 * Return: 0
 */
void puts2(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		if (l % 2 == 0)
		{
		putchar(*(str + l));
		}
		l++;

	}
	putchar(10);
}
