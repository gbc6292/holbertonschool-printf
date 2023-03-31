#include <stdarg.h>
#include "main.h"
/**
 * _printf - Function that print, strings, characters and integers.
 * @format: Format of the argument to be printed.
 * Return: A printed argument.
 *
 */
int _printf(const char *format, ...)
{
	int idx = 0, x = 0;
	va_list list;

	va_start(list, format);
	if (format[idx] == '\0')
		return (0);
	if (list == '\0')
		return (0);
	while (format[idx] != '\0')
	{
		if (format[idx] == '%')
		{
			switch (format[idx + 1])
			{
				case 'c':
					{
						x += print_char(va_arg(list, int));
						break;
					}
				case 's':
					{
						x += print_string(va_arg(list, char *));
						break;
					}
				case '%':
					{
						x += print_char('%');
						break;
					}
				case 'd':
				case 'i':
					{
						x += pr_int(va_arg(list, int));
						break;
					}
			}
				idx++;
		}

		else
		{
			x += print_char(format[idx]);
		}
		idx++;
	}
	va_end(list);
	return (x);
}
