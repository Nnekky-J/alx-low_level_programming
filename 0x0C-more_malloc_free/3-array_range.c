#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum range of values stored
 *
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 *
 */
int *array_range(int min, int max)
{
	int *check;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	check = malloc(sizeof(int) * size);

	if (check == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		check[k] = min++;

	return (check);
}
