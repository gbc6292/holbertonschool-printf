#include "main.h"
int print_char(char a)
{
	_putchar(a);
	return (1);
}

int print_string(char *b)
{
	int in;

	for (in = 0; b[in] != '\0'; in++)
	{
		_putchar(b[in]);
	}
	return (in);
}
