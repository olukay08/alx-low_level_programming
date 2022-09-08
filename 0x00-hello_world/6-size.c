#include <stdio.h>
/**
 * main - -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int p;
	float t;
	char h;
	double j;
	printf("size of :%zu bytes\n",sizeof(p));
	printf("size of float :%zu bytes \n",sizeof(t));
	printf("size of char :%zu bytes \n",sizeof(h));
	printf("size ofdouble :%zu bytes \n",sizeof(j));
	return (0);
}
