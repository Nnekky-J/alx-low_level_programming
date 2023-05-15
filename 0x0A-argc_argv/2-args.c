#include <stdio.h>
#include "main.h"
/**
  *main - Prints all arguments it receives
  *
  *@argc: The number of arguments
  *
  *@argv: The input argument
  *
  *Return: Always 0 (Success)
  */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
	{
		printf("%s\n", argv[u]);
	}
	return (0);
}
