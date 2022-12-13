#include "main.h"
/**
 *
 *  * _isalpha - fuction to check if c is a letter,lowercase or uppercase
 *
 *   * @c: is the int that will use for the argument in the function
 *
 *    *  Return: 1 for _isalpha and 0 for not aplaha
 *
 *     */
int _isalpha(int c)
{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
				{
							return (1);
								}
			else
						return (0);
}
