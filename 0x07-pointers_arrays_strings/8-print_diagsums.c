#include <stdio.h>
#include "main.h"

/**
  *print_diagsums - a function that prints the
  *sum of the two diagonals of a square matrix of integers.
  *
  *@a: Input
  *
  *@size: Input
  *
  *Return: Always 0 (Success)
  */
void print_diagsums(int *a, int size)
{
	int k, n, sum1 = 0, sum2 = 0;

	for (k = 0; k <= (size * size); k = k + size + 1)
		sum1 = sum1 + a[k];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
