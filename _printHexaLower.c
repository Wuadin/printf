#include "main.h"
/**
 * _printHexaUpper - print num base hexa.
 * @hL: num to print base hexa Lower
 * Return: a pointer to the function.
 */

int _printHexaLower(va_list hL)
{
	int i;
	int count_number = 0;
	unsigned int num;
	int hexL[1000];

	num = va_arg(hL, int);

	if (num)
	{
		if (num == 0)
		{
			_putchar('0');
			count_number++;
		}
		else
		{
			for (i = 0; num > 0; i++)
			{
				hexL[i] = num % 16;
				num /= 16;
			}

			for (i -= 1; i >= 0; i--)
			{
				if (hexL[i] > 9)
					hexL[i] += 39;
				_putchar(hexL[i] + '0');
				count_number++;
			}
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count_number);
}
