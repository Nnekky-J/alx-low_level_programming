#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - Multiplies two numbers
  *
  *@argc: The number of arguments
  *
  *@argv: The input arguments
  *
  *Return: Always 0 (Success)
  */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	int a, b, u;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	u = a * b;
	printf("%d\n", u);

	return (0);
}
