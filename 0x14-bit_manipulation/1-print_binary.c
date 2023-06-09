#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 *
 * @n: number to print in binary
 *
 */
void print_binary(unsigned long int n)
{
	int m, count = 0;
	unsigned long int world;

	for (m = 63; m >= 0; m--)
	{
		world = n >> m;

		if (world & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
