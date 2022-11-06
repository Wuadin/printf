#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the _getmatch_print() function
 * that will determine which printing function to call depending on the
 * converion specifiers contained into format
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int charprinted = 0;
	unsigned int i;
	int (*call_print)();

	if ((!format) || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			call_print = _getmatch_print(format[i + 1]);
			if (call_print)
				charprinted += call_print(list);
			else
			{
				if (format[i + 1] == '%')
					charprinted += _putchar(format[i + 1]);
				else
				{
					charprinted += _putchar(format[i]);
					charprinted += _putchar(format[i + 1]);
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			charprinted++;
		}
	}

	va_end(list);
	return (charprinted);

}
