#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  *print_numbers - prints numbers, followed by a new line
  *
  *@separator: String to be printed between numbers
  *
  *@n: The number of integers passed to the function
  *
  *Return: Void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int k;

	va_start(numbers, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(numbers, int));

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);

}
