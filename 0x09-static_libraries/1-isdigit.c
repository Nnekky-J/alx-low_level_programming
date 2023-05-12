#include "main.h"
/**
  * _isdigit - Checks for a digit
  *
  *Return: 1 if c is a digit otherwise return 0
  *
  *@c: The digit to be checked
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
