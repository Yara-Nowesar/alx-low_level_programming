#include "main.h"

/**
 * _strpbrk - locates the first occurrence in s of any of the bytes in accept
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				P = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
