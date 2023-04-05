#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @dest: memory area
 * @src: source
 * @n: length of source to be copied
 *
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
