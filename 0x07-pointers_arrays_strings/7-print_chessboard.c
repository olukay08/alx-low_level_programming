#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a:parameter
 * Retturn:noth
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				printf("%c\n", a[i][j]);
			}
			else
			{
				printf("%c", a[i][j]);
			}
		}

	}
}