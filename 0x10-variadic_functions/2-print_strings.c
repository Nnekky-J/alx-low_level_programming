#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_strings -Pprints strings, followed by a new line
  *
  *@separator: String to be printed between the strings
  *
  *@n: Number of strings passed to the function
  *
  *Return: Void
  *
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int k;
	char *j;

	va_start(numbers, n);

	for (k = 0; k < n; k++)
	{
		j = va_arg(numbers, char *);

		if (j == NULL)
			printf("nil");
		else
			printf("%s", j);

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);

}
