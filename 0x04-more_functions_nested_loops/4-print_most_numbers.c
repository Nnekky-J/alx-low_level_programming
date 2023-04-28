#include "main.h"

/**
  *print_most_numbers - Prints numbers from 0 to 9 without 2 and 4
  *
  *Description: Prints numbers excluding some
  *
  *Return: The numbers
  *
  */

void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
	if (c == 2 || c == 4)
	{
	continue;
	}
	else
	{
	_putchar(c + '0');
	}
	}
	_putchar('\n');
}
