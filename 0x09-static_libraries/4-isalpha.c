#include "main.h"
/**
  * _isalpha - Shows 1 if the input is a letter and 0 otherwise
  *
  * @c: Is the ASCII letter
  *
  *Return: -  1 if it is a letter and otherwise 0
  *
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
