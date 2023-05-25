#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - Function that returns the sum of all its parameters
  *
  *@n: The first parameter
  *
  *Return: void
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int j, sum = 0;

	va_start(numbers, n);

	for  (j = 0; j < n; j++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
