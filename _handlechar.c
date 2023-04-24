#include "main.h"

/**
 * _handlechar: hamdle teh case of c specifier
 * @args: the argument list to get the char from
 * Return: the number of char printed
 */

int _handlechar (va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
