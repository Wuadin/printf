#include "main.h"
/**
* _printOctal - function that convert an number in octal base
* @octa: unsigned integer to print
* Return: size the output
*/
int _printOctal(va_list octa)
{
	int i;
	int count_number = 0;
	unsigned int num;
	int oct[1000];

	num = va_arg(octa, int);

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
				oct[i] = num % 8;
				num /= 8;
			}

			for (i -= 1; i >= 0; i--)
			{
				_putchar(oct[i] + '0');
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
