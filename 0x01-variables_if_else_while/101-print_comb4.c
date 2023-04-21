#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  *Description: 'print all possible'
  *Return: Always 0 (Successful)
  */

int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = 'o';
			j++;
		}
		j = 'o';
		i++;
	}
	putchar('\n');
	return (0);
}
