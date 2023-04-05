#include "main.h"

/**
 * _strpbrk - locates the first occurrence in s of any of the bytes in accept
 * @s: string
 * @accept: bytes
 * Return: unsigned int
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
