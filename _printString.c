#include "main.h"
/**
 * _printString - print string.
 * @list: string to print.
 * Return: a pointer to the function.
 */

int _printString(va_list list)
{
	char *let;
	unsigned int x;

	let = va_arg(list, char *);
	if (let == NULL)
		let = "(null)";
	for (x = 0; let[x] != '\0'; x++)
		_putchar(let[x]);
	return (x);
}
