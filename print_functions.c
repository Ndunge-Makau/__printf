#include "main.h"

/**
 * print_string - prints sa string
 * @string: string to be printed
 * Return: length of printed characters
 */

int print_string(char *string)
{
	int count = 0;

	if (string != NULL)
	{
		while (*string)
		{
			_putchar(*string++);
			count += 1;
		}
	}
	else
		return (print_string("(null)"));
	return (count);
}
/**
 * print_int - prints an integer
 * @var: variable to be printed
 * Return:
 *  length of printed characters
 */

int print_int(long int var)
{
	int count = 0;

	if (var < 0)
	{
		_putchar('-');
		count += 1;
		var = -var;
	}
	if (var / 10)
		count += print_int(var / 10);
	_putchar(var % 10 + '0');
	count += 1;
	return (count);
}
