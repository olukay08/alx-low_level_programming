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
	printf("size of a char :%zu byte(s)\n", sizeof(ph));
	printf("size of an int :%zu byte(s) \n", sizeof(hk));
	printf("size of a long int :%zu byte(s) \n", sizeof(bj));
	printf("size of a long long int :%zu byte(s) \n", sizeof(ln));
	printf("size of a float :%zu byte(s) \n", sizeof(tm));
	return (0);
}
