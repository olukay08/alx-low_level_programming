#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print the sum of positive numbers
 * @argc :pra1
 * @argv:para 2
 * Return:0
 */
int main(int argc, char *argv[])
{
	int sum, i, num;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 1)
		{
			num += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		sum = num;
	}
	if (argc == 1)
	{
		sum = 0;
	}
	printf("%d\n", sum);
	return (0);
}

