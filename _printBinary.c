#include "main.h"

/**
* _printBinary - function that prints a conversion of integer to binary
* @inte: integer to print
* Return: number printed
*/
int _printBinary(va_list inte)
{
	int i;
	int count_number = 0;
	unsigned int num;
	int bin[1000];

	num = va_arg(inte, int);

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
				bin[i] = num % 2;
				num /= 2;
			}

			for (i -= 1; i >= 0; i--)
			{
				_putchar(bin[i] + '0');
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
