#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output based on format
 * @format: character string
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	int count, total = 0;
	va_list args;
	int flag = 0;

	if (format == NULL)
		return (0);

	va_start(args, format);
	for (count = 0; *(format + count) != '\0'; count++)
	{
		if (format[count] == '%')
			flag = 1;
		else if (flag == 1)
		{
			flag = 0;
			switch (format[count])
			{
				case 'c':
					_putchar(va_arg(args, int));
					total += 1;
					break;
				case 's':
					total += print_string(va_arg(args, char *));
					break;
				case '%':
					_putchar('%');
						total += 1;
					break;
				case 'd':
					total += _print_int((long)(va_arg(args, int)));
					break;
				case 'i':
					total += _print((long)(va_arg(args, int)));
					break;
				default:
					_putchar('%');
					_putchar(format[count]);
					total += 2;
			}
		}
		else
		{
			_putchar(format[count]);
			total += 1;
		}
	}
	va_end(args);
	return (total);
}
