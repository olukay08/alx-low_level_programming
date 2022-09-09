#include <stdio.h>
/**
 * main - -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ph;
	int hk;
	long int bj;
	long long int ln;
	float tm;
	printf("Size of a char : %zu byte(s)\n", sizeof(ph));
	printf("Size of an int : %zu byte(s) \n", sizeof(hk));
	printf("Size of a long int : %zu byte(s) \n", sizeof(bj));
	printf("Size of a long long int : %zu byte(s) \n", sizeof(ln));
	printf("Size of a float : %zu byte(s) \n", sizeof(tm));
	return (0);
}
