#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *free_grid - Frees two dimensional grid
  *
  *@grid: Two dimensional grid
  *
  *@height: The height of grid
  *
  *Return: Nothing
  */
void free_grid(int **grid, int height)
{
	int k;


	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
