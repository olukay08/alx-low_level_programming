#include <stdio.h>
/**
 * main - -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char h;
	int p;
	long int j;
	long long int n;
	float t;
	printf("size of a char :%zu byte(s)\n", sizeof(h));
	printf("size of an int :%zu byte(s) \n", sizeof(p));
	printf("size of a long int :%zu byte(s) \n", sizeof(j));
	printf("size of a long long int :%zu byte(s) \n", sizeof(n));
	printf("size of a float :%zu byte(s) \n", sizeof(t));
	return (0);
}
