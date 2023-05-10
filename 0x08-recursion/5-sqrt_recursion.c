#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
  *_sqrt_recursion - A function that returns
  *the natural square root of a number
  *
  *@n: The number
  *
  *Return: The square root of the number
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
  *actual_sqrt_recursion - Recurses to find the
  *natural square root of a number
  *
  *@n: The number to be squared
  *
  *@i:Iiterator
  *
  *Return: The resulting square root
  */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
