#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

#define BUFF_SIZE 1024

/*********Prototype*******/

int _putchar(char c);
int _printf(const char *format, ...);
void _print_integer(int n, int *count);
int _handleint(va_list args);
int _handlenbr(va_list args);
int _handlestr(va_list args);

#endif
