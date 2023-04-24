#include "main.h"

/**
 * _printf - fuction work like printf
 * @format: the fuction signature
 * Return: number of character printed
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += _handlechar(args);
					break;
				case 's':
					count += _handlestr(args);
					break;
				case 'd':
				case 'i':
					count += _handleint(args);
					break;
				case '%'
					count += _putchar('%');
					break;
				case 'b'
					count += -handlenbr(args);
					break;
				default:
					count += _putchar('%');
					count += _putchar(*format);
					break;
			}
		}
		else
			count += _putchar(*format);
	}
	va_end(args);
	return (count);
}	
