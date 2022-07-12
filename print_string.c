#include "main.h"

/**
 * print_string - print string
 * Return: count
 */

int print_string(char *string)
{
	int count = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		count++;
	}
	return (count);
}
