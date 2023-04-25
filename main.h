#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

/**
 * struct parametrs - parametrs struct
 * @unsign: flag if uns value 
 * @plus_flag: on if specified
 * @space_flag: on if specified
 * @minus_flag: on if _flag specified
 * @with: field specified
 */
typedef struct parametrs
{
	unsigned int unsign : 1;
	unsigned int plus_flag : 1;
	unsigned int space_flage : 1;
	unsigned int minus_flag : 1;
	unsigned int width;
} params_t

/****Prototypes**********************************/

int _puts(char *str);
int _putchar(int c);

int print_char(va_list ap, params_t *params);





#endif /* MAIN_H */
