#include "main.h"
/**
 * _printChar - Prints character
 * @list: list of current arguments
 * Return: Will return 1.
 */

int _printChar(va_list list)
{
	char s;

	s = va_arg(list, int);
	_putchar(s);
	return (1);
}
