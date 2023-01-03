#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: the array to copy over
 * @src: the source to cpy
 * @n: unsigned int variable
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
		dest[b] = src[b];
	return (dest);
}
