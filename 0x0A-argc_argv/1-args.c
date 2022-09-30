#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc:para 1
 * @argv:para 2
 * Return:0 for success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
