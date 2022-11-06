#include "main.h"

/**
* _printUnsInt - function that prints an unsigned integer
* @u_inte: unsigned integer to print
* Return: size the output
*/
int _printUnsInt(va_list u_inte)
{
	unsigned int len, mul, x;
	unsigned int digit, n, num, count = 0;

	n = va_arg(u_inte, unsigned int);

	if (n)
	{
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
