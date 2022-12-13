#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 *  * *_memcpy - function that copies memory area
 *
 *   * @dest:pra 1
 *
 *    * @src:para 2
 *
 *     * @n: integer bytes
 *
 *      * Return:chars
 *
 *       */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		return (memcpy(dest, src, n));
}
