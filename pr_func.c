#include "main.h"
/**
 * print_char - Function that prints char
 * @a: Variable that contain the character to be printed.
 * Return: 1
 *
 */
int print_char(char a)
{
	_putchar(a);
	return (1);
}

/**
 * print_string - Function that print a string.
 * @b: Pointer that contains the string to be printed.
 * Return: The string
 *
 */
int print_string(char *b)
{
	int in;

	for (in = 0; b[in] != '\0'; in++)
	{
		_putchar(b[in]);
	}
	return (in);
}
