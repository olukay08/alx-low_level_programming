#include <stdio.h>
#include <stdlib.h>
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
		if (atoi(argv[i]) >= 0)
		{
			num += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		sum = num;
		printf("%d\n", sum);

	}
	if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}

