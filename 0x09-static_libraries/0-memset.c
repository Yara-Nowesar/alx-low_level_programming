#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: pointer
 * @b: constant
 * @n: max bytes
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
