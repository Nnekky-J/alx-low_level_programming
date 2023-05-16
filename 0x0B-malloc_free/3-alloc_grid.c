#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 *
 * @width: Input width
 *
 * @height: Input height
 *
 * Return: pointer to 2 dimensional array
 *
 */
int **alloc_grid(int width, int height)
{
	int **point;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	point = malloc(sizeof(int *) * height);

	if (point == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		point[i] = malloc(sizeof(int) * width);

		if (point[i] == NULL)
		{
			for (; i >= 0; i--)
				free(point[i]);

			free(point);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			point[i][j] = 0;
	}

	return (point);
}
