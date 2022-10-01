#include <string.h>

#include <stdio.h>

#include "main.h"

/**
 *
 *  * _strspn - a function that gets the length of a prefix substring
 *
 *   * @s:para 1
 *
 *    * @accept:pra 2
 *
 *     * Return:chars
 *
 *      */

unsigned int _strspn(char *s, char *accept)

{

		return (strspn(s, accept));

}
