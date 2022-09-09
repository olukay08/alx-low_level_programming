#include <stdio.h>
/**
 * main - -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	char jk;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (jk = 'A' ; jk <= 'Z' ; jk++)

	{
		putchar(jk);
	}
	putchar('\n');
	return (0);
}
