#include "main.h"

/**
 * _getmatch_print - selects the correct func to perform the operation
 * sked by the user
 * @f_type: operator passed as arguement to program
 * Return: a pointer to the function
 */

int (*_getmatch_print(const char f_type))()
{
	format_t matchs[] = {
	    {"c", _printChar},
	    {"s", _printString},
	    {"d", _printInt},
	    {"i", _printInt},
	    {"b", _printBinary},
	    {"u", _printUnsInt},
		{"o", _printOctal},
	    {"x", _printHexaLower},
	    {"X", _printHexaUpper},
	    {NULL, NULL}
	};
	unsigned int i = 0;

	while (matchs[i].type)
	{
		if (matchs[i].type[0] == f_type)
		{
			return (matchs[i].func_fmt);
		}
		i++;
	}
	return (NULL);
}
