#include "main.h"
/**
  *_pow_recursion - A  a function that
  *returns the value of x raised to the power of y0
  *
  *@x: The value to be raised
  *
  *@y: The power
  *
  *Return: Result of the power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
