#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - Struct op
 * @type: The operator
 * @func_fmt: The function associated
 */
typedef struct format
{
	char *type;
	int (*func_fmt)();
} format_t;

int _printf(const char *format, ...);
int (*_getmatch_print(const char type))();
int _printChar(va_list c);
int _printString(va_list s);
int _printInt(va_list i);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
int _printBinary(va_list inte);
int _printUnsInt(va_list u_inte);
int _printOctal(va_list oct);
int _printHexaLower(va_list hL);
int _printHexaUpper(va_list hU);A


#endif /* #ifndef PRINTF_H */

