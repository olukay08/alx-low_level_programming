#include <string.h>

#include <stdio.h>

#include "main.h"



/**
 *
 *  * *_strncat - it joins strings togethers
 *
 *   * @dest:parameter
 *
 *    * @src:second string parameter
 *
 *     * @n:no of bytes
 *
 *      * Return:chars
 *
 *       */

char *_strncat(char *dest, char *src, int n)

{

		return (strncat(dest, src, n));

}
