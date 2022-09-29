#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - print the same strints in two ways
 * @s:para 1
 * Return: 1 and 0
 */
int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}
/**
 * check - checks if a string is palidrome
 * @s:para 1
 * @start: index
 * @end: end index
 * @flag :flag to indicate ia string is a palidrone
 * Return:void
 */
void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}
/**
 * _strlen_recursion - the length of the string
 * @s:para 1
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
