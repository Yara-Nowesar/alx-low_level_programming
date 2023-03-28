#include "main.h"

/**
 * print_rev - prints reversed string, followed by a newline
 * @s: pointer to the string to print
 * Return: void
*/

void print rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
