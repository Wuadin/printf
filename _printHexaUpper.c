#include "main.h"
/**
 * _printHexaUpper - print number base hexa.
 * @hU: num base Hexat Upper.
 * Return: a pointer to the function.
 */

int _printHexaUpper(va_list hU)
{
	int i;
	int count_number = 0;
	unsigned int num;
	int hexU[1000];

	num = va_arg(hU, int);

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
				hexU[i] = num % 16;
				num /= 16;
			}

			for (i -= 1; i >= 0; i--)
			{
				if (hexU[i] > 9)
					hexU[i] += 7;
				_putchar(hexU[i] + '0');
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
