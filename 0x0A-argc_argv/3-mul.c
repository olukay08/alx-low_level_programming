#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc:para1
 * @argv:pra2
 * Return:0 and 1 for error
 */
int main(int argc, char *argv[])
{
	long int r;
	long int k, l;

	if (argc > 1 && argc < 4)
	{
		k = atoi(argv[1]);
		l = atoi(argv[2]);
		r = k * l;
		printf("%ld\n", r);
	}
	else
	{
		puts("Error");
		return (1);
	}
	return (0);
}
