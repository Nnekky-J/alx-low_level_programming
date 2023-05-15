#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - Adds positive numbers
  *
  *@argc: The number of arguments
  *
  *@argv: The input arguments
  *
  *Return: Always 0 (Success)
  */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	int u, p, sum;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (u = 1; u < argc; u++)
	{
		p = atoi(argv[u]);
		if (p <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += p;
	}

	printf("%d\n", sum);

	return (0);
}
