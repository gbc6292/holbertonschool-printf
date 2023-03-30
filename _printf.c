#include <stdarg.h>
#include <stdio.h>
#include "main.h"



int _printf(const char *format, ...)
{
	int idx, x;
	va_list list;

	va_start(list, format);

	idx = 0;

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
						x =+ pr_int(va_arg(list, int));
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

