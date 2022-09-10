#include <stdio.h>
/**
 * main - -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;
 	float y;
	printf("Size of a char : %zu byte(s)\n",sizeof(ch));
	printf("Size of an int : %zu byte(s)\n",sizeof(int));
	printf("Size of a long int : %zu byte(s)\n",sizeof(long int));
	printf("Size of a long long int :%zu byte(s)\n", sizeof(long long int));
	printf("Size of a float : %zu byte(s)\n", sizeof(y));
	return (0);
}
