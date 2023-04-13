#include "main.h"

/**
 * *create_array - creats array of chars
 * intializes it with a specific char
 * @size: size of the array
 * @c: char to intialize
 * Return: pointer to the array initalized or Null
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
