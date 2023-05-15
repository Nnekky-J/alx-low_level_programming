#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - Prints minimum number of coins
  *
  *@argc: The number of input
  *
  *@argv: The input argument
  *
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int num, money, u;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", 0);
		return (1);
	}

	money = 0;
	for (u = 0; u < 5; u++)
	{
		while (num >= coins[u])
		{
			num -= coins[u];
			money++;
		}
	}

	printf("%d\n", money);

	return (0);
}
