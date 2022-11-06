#include "main.h"
/**
* _printInt - function that prints an integer
* @i: integer to print
* Return: size the output
*/

int _printInt(va_list i)
{
	int len, mul, x, digit, n, num, count = 0;

	n = va_arg(i, int);
	if (n)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		num = n;
		len = 0;
		while (num)
		{
			num /= 10;
			len++;
		}
		mul = 1;
		for (x = 1; x <= len - 1; x++)
			mul *= 10;
		for (x = 1; x <= len; x++)
		{
			digit = n / mul;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			n -= digit * mul;
			mul /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
