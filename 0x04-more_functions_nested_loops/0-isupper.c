#include "main.h"

/**
  *_isupper - Checks for uppercase character
  *
  *@c: The upper case letter
  *
  *Return: 1 otherwise return 0
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
