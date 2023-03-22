#include "main.h"

/**
 * main - Entry point
 *
 * Description: print alphabet - using _putchar function to print the alphabet a - z
 *
 * Return: always 0 (success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	
	return (0);
}
