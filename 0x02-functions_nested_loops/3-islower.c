#include "main.h"
/**
  *_islower - 'checks if the input is lower case'
  *
  *@c: - character in ASCII table
  *
  *Return: 1 if char is lower case otherwise return 0
  *
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
