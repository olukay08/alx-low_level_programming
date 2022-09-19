#include "main.h"
/**
 * swap_int - To interchnage the values of two variables through pointers
 * @a:fisrt parameter
 * @b:Second parameter
 * Return:Nothing
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;

	*b = t;
}
