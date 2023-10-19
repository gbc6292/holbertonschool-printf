#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom printf function that prints strings, characters, and integers.
 * @format: A format string containing format specifiers.
 * @...: Variable number of arguments corresponding to the format specifiers.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int idx = 0; // Index to traverse the format string
	int x = 0;   // Counter for the number of characters printed
	va_list list; // Variable argument list

	va_start(list, format); // Initialize the variable argument list

	// Check for empty format string
	if (format[idx] == '\0')
		return (0);

	// Check if the variable argument list is empty
	if (list == '\0')
		return (0);

	while (format[idx] != '\0')
	{
		if (format[idx] == '%')
		{
			// Handle format specifiers
			switch (format[idx + 1])
			{
				case 'c':
					{
						x += print_char(va_arg(list, int)); // Print a character
						break;
					}
				case 's':
					{
						x += print_string(va_arg(list, char *)); // Print a string
						break;
					}
				case '%':
					{
						x += print_char('%'); // Print a literal '%'
						break;
					}
				case 'd':
				case 'i':
					{
						x += pr_int(va_arg(list, int)); // Print an integer
						break;
					}
			}
			idx++; // Move to the next character in the format string
		}
		else
		{
			// Print regular characters
			x += print_char(format[idx]);
		}
		idx++; // Move to the next character in the format string
	}

	va_end(list); // Clean up the variable argument list
	return (x); // Return the total number of characters printed
}
