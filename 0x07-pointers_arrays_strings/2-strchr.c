#include "main.h"

/**
 * _strchr - pointer to the first occurrence of c in s
 * or NULL if the character is not found
 * @s: pointer to the constant
 * @c: constant
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
