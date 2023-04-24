#include "main.h"

/**
 * _putchar - writing the char character to stdout
 * @c: char to print
 *
 * Return: 1 on succes or -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
